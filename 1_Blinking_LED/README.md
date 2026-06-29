Project 1: Blinking LED

This is a simple beginner project completed as part of the 3-hour Robonyx starter course.

<img width="400" height="711" alt="IMG_3217" src="https://github.com/user-attachments/assets/92198adb-aadf-43d8-a665-37f28c5c9bdd" />

Components Used:
1. Arduino Mega 2560
2. Breadboard and jumper wires
3. 220-ohm Resistor
4. White LED
   
What I Learnt and Experimented With:
1. Current Limiting: Connected the resistor in series with the LED to prevent overcurrent damage.
2. Persistence of Vision: Reduced delay to 5ms. The LED appeared constantly lit, demonstrating how fast biological human sight limits processing rapid blinking.
3. Breadboard Architecture: Learned that breadboard rows share an underlying metal strip. Components must bridge separate rows to avoid a short circuit.
Troubleshooting Log:
Issue: The circuit was correctly aligned, but the LED failed to illuminate.
Fix: Reversed the LED orientation. I had incorrectly connected the shorter (negative) cathode pin to the positive supply voltage. This highlighted the         critical nature of component polarity.
