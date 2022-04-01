import serial 
//ser = ser.serial('/dev/ttyS0')

com = serial.Serial()
com.port = port
com.baudrate = baud
com.timeout = 1
com.setDTR(False)
com.open()