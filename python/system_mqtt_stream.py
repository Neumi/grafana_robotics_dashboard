import psutil
import paho.mqtt.client as mqtt

client = mqtt.Client()
client.connect('localhost')

system_mem_topic = 'copilot/data/system/memory'
system_cpu_topic = 'copilot/data/system/cpu'


while 1:
	try:
		ram_usage = psutil.virtual_memory()[2]
		cpu_usage = psutil.cpu_percent(4)
		client.publish(system_mem_topic, ram_usage)
		client.publish(system_cpu_topic, cpu_usage)
	except:
		print("system data fetch failed")

