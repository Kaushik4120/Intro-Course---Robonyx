Project 3: Solar scanner 

This is a simple beginner project completed as part of the 3-hour Robonyx starter course.

Project GIF:


Equipment used:
- Arduino 2560 Mega
- Breadboard and jumper wires (M-F and M-M)
- USB cable
- 220 ohm resistors (3x)
- Passive buzzer
- RGB LED
- Solar scanner
- Servo motor


Brief project description:
- Practical use : Act as a security scanning system to detect distances from objects and provide necessary alerts.
- Servo motor : Is used to provide 180 degree back and forth rotation of the solar scanner
- Solar scanner : Detects objects in it's line of sight to help find the distance from those objects.
- Passive buzzer and LED : Outputs specific sounds and colors to convey object distance and provide alerts


What I learnt:
- Combining different components to develop complex systems
- Mapping different parameters together to create realistic features
- Coding the circuit to perform different functions simultaneously (systems thinking)
- Using new functions from Arduino libraries
- Integrating two different programming languages together
- Fixing errors such as electrical noise to make the project more robust.

My Improvements / Experimentations:
- Noticed errors in distance calculation due to electrical noise, and solved it by taking mean distance from 5 values at each angle of the solar scanner's    rotation, thus providing a more approximate, reliable distance value.
- Better buzzer beeping system ( Yet to do)
- User input angle modification ( Yet to do )


Troubleshooting log:
1. Issue: the solar scanner didn't run after uploading the code to the Arduino.
   Fix: some of the jumper wire pin connections were wrong. I noticed that this was a common mistake repeated quite frequently, which could consequently    lead to circuit damage in some rare cases.

2. Issue: The servo motor made the solar scanner rotate only for 175 degrees, rather than a full 180.
   Fix: I was using a servo motor which was slightly different from Arduino's standard model, thus having to change it's pulse width values.

3. Issue: The servo motor's rotation wasn't really smooth at slower speeds.
   Fix : I used a new function - myServo.writeMicroseconds(value) to increase angle precision and make rotation smoother
