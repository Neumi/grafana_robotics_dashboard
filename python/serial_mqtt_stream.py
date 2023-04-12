import serial
import paho.mqtt.client as mqtt
import time

serial_port = '/dev/ttyUSB0'
baud_rate = 115200

ser = serial.Serial(serial_port, baud_rate)

client = mqtt.Client()
client.connect('localhost')

acc_x_topic = 'copilot/data/acceleration/x'
acc_y_topic = 'copilot/data/acceleration/y'
acc_z_topic = 'copilot/data/acceleration/z'

gyro_x_topic = 'copilot/data/gyro/x'
gyro_y_topic = 'copilot/data/gyro/y'
gyro_z_topic = 'copilot/data/gyro/z'
gyro_temp_topic = 'copilot/data/gyro/temp'

mag_x_topic = 'copilot/data/mag/x'
mag_y_topic = 'copilot/data/mag/y'
mag_z_topic = 'copilot/data/mag/z'
mag_heading_topic = 'copilot/data/mag/heading'


while True:
    try:
       data = ser.readline().strip().decode('utf-8')
       acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z, gyro_temp, mag_x, mag_y, mag_z, mag_heading = data.split(',')  # split the data by comma into three values
       client.publish(acc_x_topic, acc_x)
       client.publish(acc_y_topic, acc_y)
       client.publish(acc_z_topic, acc_z)
       client.publish(gyro_x_topic, gyro_x)
       client.publish(gyro_y_topic, gyro_y)
       client.publish(gyro_z_topic, gyro_z)
       client.publish(gyro_temp_topic, gyro_temp)
       client.publish(mag_x_topic, mag_x)
       client.publish(mag_y_topic, mag_y)
       client.publish(mag_z_topic, mag_z)
       client.publish(mag_heading_topic, mag_heading)
    except:
       print("data not fetchable")
