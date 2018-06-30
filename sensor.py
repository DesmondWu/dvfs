#!/usr/bin/python
import os
import sys

def get_tmp(): 
    file = open("/sys/devices/virtual/thermal/thermal_zone0/temp","r")
    temp = int(file.read(10))/1000
    print ("CPU Temp:"+str(temp))
    return temp

for num in range(0,5000):
    get_tmp()
