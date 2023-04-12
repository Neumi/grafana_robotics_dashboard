
void AccelerometerInit()
{
  Wire.beginTransmission(0x40); // address of the accelerometer
  // reset the accelerometer
  Wire.write(0x10);
  Wire.write(0xB6);
  Wire.endTransmission();
  delay(10);

  Wire.beginTransmission(0x40); // address of the accelerometer
  // low pass filter, range settings
  Wire.write(0x0D);
  Wire.write(0x10);
  Wire.endTransmission();

  Wire.beginTransmission(0x40); // address of the accelerometer
  Wire.write(0x20); // read from here
  Wire.endTransmission();
  Wire.requestFrom(0x40, 1);
  byte data = Wire.read();
  Wire.beginTransmission(0x40); // address of the accelerometer
  Wire.write(0x20);
  Wire.write(data & 0x0F); // low pass filter to 10 Hz
  Wire.endTransmission();

  Wire.beginTransmission(0x40); // address of the accelerometer
  Wire.write(0x35); // read from here
  Wire.endTransmission();
  Wire.requestFrom(0x40, 1);
  data = Wire.read();
  Wire.beginTransmission(0x40); // address of the accelerometer
  Wire.write(0x35);
  Wire.write((data & 0xF1) | 0x04); // range +/- 2g
  Wire.endTransmission();
}

void AccelerometerRead()
{
  Wire.beginTransmission(0x40); // address of the accelerometer
  Wire.write(0x02); // set read pointer to data
  Wire.endTransmission();
  Wire.requestFrom(0x40, 6);

  // read in the 3 axis data, each one is 16 bits
  // print the data to terminal
  short data = Wire.read();
  data += Wire.read() << 8;
  Serial.print(data / 16384.0); // returns axis acceleration in g
  Serial.print(",");
  data = Wire.read();
  data += Wire.read() << 8;
  Serial.print(data / 16384.0); // returns axis acceleration in g
  Serial.print(",");
  data = Wire.read();
  data += Wire.read() << 8;
  Serial.print(data / 16384.0); // returns axis acceleration in g
  
}





void writeTo(int DEVICE, byte address, byte val) {
  Wire.beginTransmission(DEVICE); //start transmission to ACC
  Wire.write(address);        // send register address
  Wire.write(val);        // send value to write
  Wire.endTransmission(); //end transmission
}
//reads num bytes starting from address register on ACC in to buff array
void readFrom(int DEVICE, byte address, int num, byte buff[]) {
  Wire.beginTransmission(DEVICE); //start transmission to ACC
  Wire.write(address);        //sends address to read from
  Wire.endTransmission(); //end transmission

  Wire.beginTransmission(DEVICE); //start transmission to ACC
  Wire.requestFrom(DEVICE, num);    // request 6 bytes from ACC

  int i = 0;
  while (Wire.available())   //ACC may send less than requested (abnormal)
  {
    buff[i] = Wire.read(); // receive a byte
    i++;
  }
  Wire.endTransmission(); //end transmission
}
