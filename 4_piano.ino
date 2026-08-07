// DIGITAL PIANO 

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Establishes a connection between the Arduino pins and the LCD

int buzzer = 13;

int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int button5 = 6;

int buttons[] = {button1, button2, button3, button4, button5};
int freq[] = {261, 293, 329, 349, 392};
char notes[][3] = {"C4","D4","E4","F4","G4"}; // This is a multi-dimensional array, where each character is treated as an individual array


void setup() {

  lcd.begin(16,2); // Indicates the maximum number of columns and rows of the LCD respectively

  pinMode(buzzer, OUTPUT);

  for (int i=0 ; i<5; i++){
    pinMode(buttons[i], INPUT_PULLUP);
  }
}

void loop(){
  for (int i=0 ; i<5; i++){
    if (digitalRead(buttons[i]) == LOW){

      lcd.setCursor(0,0); // sets the cursor at the location where text is updated every time a button is pressed
      lcd.print("Note: ");
      lcd.print(notes[i]);

      lcd.setCursor(0,1);
      lcd.print("freq: ");
      lcd.print(freq[i]);
      
      tone(buzzer, freq[i], 500);
      delay(650);
    }
  }
}



