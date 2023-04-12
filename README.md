# Grafana Robotics Dashboard (Copilot)
A Grafana dashboard (+ configuration + firmware + python clients + RPI camera) to show different <b>real time data</b> (~50ms) from robots/machines using MQTT, Raspberry Pi, Multi Wii Copter MWC board with custom firmware.
The MWC board can easily be replaced by any Arduino that runs the [arduino firmware](arduino), while having these sensors connected:
- ITG3205 gyro
- BMA180 accelerometer
- HMC5883L magnetometer

It's called Copilot, because it needed a name and assists you while playing (driving) around or tuning your PIDs.

<img alt="import_grafana" src="/images/dashboard.png">


## What it does
This collection of code snippets in combination with a multi wii copter MCW board with costom firmware and this grafana dashboard enables you to watch real time sensor data on a dashboard that is hostet on a raspberry pi and can be accessed from any computer on the network (or internet).

The Multi Wii Board is flashed with the firmware in the Arudino directory and prints Gyro, Accelerometer, Magnetometer, Heading and Temperature via USB to the Raspebrry Pi that translates these datapoints to a Mosquitto MQTT broker. From there a Grafana dashboard visualizes all data.

System data like CPU load and RAM usage is also streamed via MQTT to the dashboard.

It is easy to add more datapoints via MQTT.

A web camera stream using the Raspberry Pi camera to Grafana lets you see what the robot sees.

## How to get started
### Upload Arudino / MWC firmware
Upload [MWC_firmware](arduino/MWC_firmware) to Arduino or MWC Multi Wii Copter board using the Arduino IDE. It will tell you what libraries you need. This also works on any Arudino with the above sensors installed.

Connect the MWC / Arduino to the RPI via USB now.



### Install Mosquitto MQTT Broker
Mosquitto is the MQTT Broker that relais the data from python to the Grafana dashboard.

SSH to you RPI. Run this one the PI:
```$ 
sudo apt install mosquitto mosquitto-clients
```
Make mosquitto autostart on systemstart:
```$ 
sudo systemctl enable mosquitto
```
Start Mosquitto:
```$ 
sudo systemctl start mosquitto
```


### Install Grafana
Grafana is the Dasboard Server and lets you view nice dashboards.
https://grafana.com/tutorials/install-grafana-on-raspberry-pi/
```$ 
wget -q -O - https://packages.grafana.com/gpg.key | sudo apt-key add -
echo "deb https://packages.grafana.com/oss/deb stable main" | sudo tee -a /etc/apt/sources.list.d/grafana.list
sudo apt-get update
sudo apt-get install -y grafana

sudo /bin/systemctl enable grafana-server
```

### Open Grafana in a browser (on remote machine)
(change IP address to RPis IP):
```$ 
http://<ip address>:3000
```
Default user and password is 'admin' and 'admin'.

You can now add the dashboard in from the [grafana](grafana) folder. (I wont show data until you finish the next steps.)

<img alt="import_grafana" src="/images/import_grafana.png">


### Clone the repo to your Raspberry Pi. 
Clone the repo:
```$ 
git clone git@github.com:Neumi/grafana_robotics_dashboard.git
```
In the repo you will find three [python scripts](python).
Before you can start, install some python packages:
If pip is not installed run:
```$ 
sudo apt install python3-pip
```
Then:
```$ 
pip install picamera pyserial paho-mqtt
```



### Start your clients:

To start the camera stream run:
```$ 
python camera_stream.py
```

To fetch data from the USB connected MQC / Arduino board to MQTT run:
```$ 
python serial_mqtt_stream.py
```

To fetch system data (CPU and RAM usage) and stream to MQTT run:
```$ 
python system_mqtt_stream.py
```

If you want to have all data shown on the dashboard like in the image on top, all scripts have to run. But the dashboard will also work with partial data.


## Debugging:
If the dashboard misses data try restarting it: (its a known issue https://github.com/grafana/mqtt-datasource/issues/44)
```$ 
service grafana-server restart
```

If you want to check if the MQTT data transfer works try to subscribe to a topic for testing:
```$ 
mosquitto_sub -t copilot/data/acceleration/x
```

