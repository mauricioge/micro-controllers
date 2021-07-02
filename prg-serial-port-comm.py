# Author: mauricioge <mauricioge@gmail.com> Aug/20/2019
# Sends info through serial port in order to turn on/off the built-in LED

import serial

# Creates an sd object (serial data) in order to use it as a comm channel
# Remember to check the COM port your Arduino is connected to and change the next line accordingly
sd = serial.Serial('COM3', 9600) 

while 1:
  sd.write(input("Input 1 to turn on, or 0 to turn off the built-in LED: ").encode())
