# Thermometer using Arduino Nano Microcontroller
---
### Built a Celsius Scale thermometer using Arduino Nano Microcontroller, lm35 sensor(Thermistor),resistors ,16x2 LCD display ,we can also print the temperature in Fahrenheit and Kelvin scale also.The code is executed using Arduino IDE.
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
![image](https://github.com/manas1331/Thermometer_using_Arduino_nano/assets/122677792/21f07707-bf4c-4d5d-bdab-9facc1445b48)


---

## Hardware Required are:

* Arduino Nano Microcontroller
* NTC 103 temperature sensor(lm 35)
* 10k ohm resistor,220 ohm resistor
* 16 x 2 LCD display
* Jumper wires(male-male/female-male)
* Breadboard
* USB connector for Arduino Nano

---
