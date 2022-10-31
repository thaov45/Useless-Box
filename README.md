# Useless Box
A useless machine that flips down a switch. Turns itself off, with 7 different movement effects.
Update: Will add the sensor later once it arrives
---
| Materials        | Note           | 
| ------------- |:-------------:| 
| Servo      |    X2   |
| Arduino Uno |      |
| Resistor     |   1k Ohm  |
| Toggle switch    |       |
| Gesture sensor      |       |

---
### Schematic
![alt text](https://github.com/thaov45/Useless-Box/blob/main/image.png "Schematic")

---
Note: The Uno uses 5V while the gesture sensor only operates at 3-3.3V, even though the input voltage is 3.3V, the signal voltage from the Uno is still 5V. Therefore, a logic level shifter is needed to shift the signal from 3.3V to 5V back and forth.
