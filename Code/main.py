import serial 
import paho.mqtt.client as paho
import RPi.GPIO as GPIO

#ser = ser.serial('/dev/ttyS0')

ser = serial.Serial()
ser.port = '/dev/ttyS0'
ser.baudrate = 9600
ser.timeout = 1
#ser.setDTR(False)
ser.open()

