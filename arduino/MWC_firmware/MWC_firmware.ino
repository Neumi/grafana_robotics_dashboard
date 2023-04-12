#include <Wire.h>

#include <Adafruit_Sensor.h>
#include <Adafruit_HMC5883_U.h>

#include "helper.h"

Adafruit_HMC5883_Unified mag = Adafruit_HMC5883_Unified(12345);


#define GYRO 0x68 //  when AD0 is connected to GND ,gyro address is 0x68.
#define G_SMPLRT_DIV 0x15
#define G_DLPF_FS 0x16
#define G_INT_CFG 0x17
#define G_PWR_MGM 0x3E
#define G_TO_READ 8 // 2 bytes for each axis x, y, z

// offsets are chip specific.
float g_offx = 12.0;
float g_offy = 15.0;
float g_offz = -2.0;
float hx, hy, hz, temperature;


void setup() {
  Serial.begin(115200);
  Wire.begin();

  mag.begin();

  AccelerometerInit();
  GyroInit();
}

void loop() {

  byte addr;
  int gyro[4];
  getGyroscopeData(gyro);
  hx = gyro[0] / 14.375;
  hy = gyro[1] / 14.375;
  hz = gyro[2] / 14.375;
  temperature = 35 + ((double) (gyro[3] + 13200)) / 280;


  sensors_event_t event;
  mag.getEvent(&event);

  float heading = atan2(event.magnetic.y, event.magnetic.x);
  float declinationAngle = 0.053; // in radians
  heading += declinationAngle;
  if (heading < 0)
    heading += 2 * PI;
  if (heading > 2 * PI)
    heading -= 2 * PI;
  float headingDegrees = heading * 180 / M_PI;


  AccelerometerRead();

  Serial.print(",");
  Serial.print(hx);
  Serial.print(",");
  Serial.print(hy);
  Serial.print(",");
  Serial.print(hz);
  Serial.print(",");
  Serial.print(temperature);

  Serial.print(",");
  Serial.print(event.magnetic.x);
  Serial.print(",");
  Serial.print(event.magnetic.y);
  Serial.print(",");
  Serial.print(event.magnetic.z);
  Serial.print(",");
  Serial.println(headingDegrees);


  delay(50);
}





void GyroInit()
{
  /*****************************************
    ITG 3200
    power management set to:
    clock select = internal oscillator
    no reset, no sleep mode
    no standby mode
    sample rate to = 125Hz
    parameter to +/- 2000 degrees/sec
    low pass filter = 5Hz
    no interrupt
  ******************************************/
  writeTo(GYRO, G_PWR_MGM, 0x00);
  writeTo(GYRO, G_SMPLRT_DIV, 0x07); // EB, 50, 80, 7F, DE, 23, 20, FF
  writeTo(GYRO, G_DLPF_FS, 0x1E); // +/- 2000 dgrs/sec, 1KHz, 1E, 19
  writeTo(GYRO, G_INT_CFG, 0x00);
}
void getGyroscopeData(int * result)
{
  /**************************************
    Gyro ITG-3200 I2C
    registers:
    temp MSB = 1B, temp LSB = 1C
    x axis MSB = 1D, x axis LSB = 1E
    y axis MSB = 1F, y axis LSB = 20
    z axis MSB = 21, z axis LSB = 22
  *************************************/
  int regAddress = 0x1B;
  int temp, x, y, z;
  byte buff[G_TO_READ];
  readFrom(GYRO, regAddress, G_TO_READ, buff); //read the gyro data from the ITG3200
  result[0] = ((buff[2] << 8) | buff[3]) + g_offx;
  result[1] = ((buff[4] << 8) | buff[5]) + g_offy;
  result[2] = ((buff[6] << 8) | buff[7]) + g_offz;
  result[3] = (buff[0] << 8) | buff[1]; // temperature
}
