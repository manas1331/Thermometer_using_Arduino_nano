# Thermometer using Arduino Nano Microcontroller

#### Built a Celsius Scale thermometer using arduino nano, lm35 sensor(Thermistor),resistors ,16x2 LCD display ,we can also print the temperature in Fahrenheit and Kelvin scale also.
---
* To print in Kelvin Scale change these lines of the code to :
<br></br>
`` Serial.print(temp[1]); ---> Serial.print(temp[2]); ``
<br></br>
`` Serial.print(" deg. C "); ---> Serial.print(" deg. K "); ``

---

* To print in Fahrenheit Scale change these lines of the code to :
<br></br>
`` Serial.print(temp[1]); ---> Serial.print(temp[3]); ``
<br></br>
`` Serial.print(" deg. C "); ---> Serial.print(" deg. F "); ``

---

## Hardware Prototype Image :

![image](https://github.com/manas1331/Thermometer_using_Arduino_nano/assets/122677792/07ec104d-ddab-43ec-b3da-fad97a2ced3f)
![image](https://github.com/manas1331/Thermometer_using_Arduino_nano/assets/122677792/a3e1990e-0097-41aa-9b3e-f86502dc871b)

---

## Hardware Required are:

* Arduino Nano Microcontroller
* NTC 103 temperature sensor(lm 35)
* 10k ohm resistor,220 ohm resistor
* 16 x 2 LCD display
* Jumper wires(male-male/female-male)
* Breadboard
* Usb connector for Arduino Nano

---
