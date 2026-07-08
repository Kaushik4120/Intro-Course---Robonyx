
// initialisation as global variables

int whiteLED1 = 7;
int greenLED = 6;
int yellowLED = 9;
int redLED = 3;
int whiteLED2 = 8;

int buzzer = 5;

int button1 = 2;
int button2 = 12;

bool buttonPressed = 0;

void setup() {

  pinMode(whiteLED1, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(whiteLED2, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(button1, INPUT_PULLUP);  //pullup resistor is used to get two clearly defined values from the buttons.
  pinMode(button2, INPUT_PULLUP);

  randomSeed(analogRead(A0));  //seeds Analogue pseudo-random numbers from signal fluctuations at pin A0
}

void loop() {

  digitalWrite(greenLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(greenLED, LOW);

  digitalWrite(yellowLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(yellowLED, LOW);

  digitalWrite(redLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(random(900, 4901));  // a random total delay time is set between 1 s and 5 s before the LED turns off
  digitalWrite(redLED, LOW);

  while (buttonPressed == 0) {
    digitalWrite(whiteLED1, HIGH);
    digitalWrite(whiteLED2, HIGH);
    if (digitalRead(button1) == 0) {  // ie. if the button is pressed
      buttonPressed = 1;              // this indicates that either button has been pressed, and the game is over.
      digitalWrite(whiteLED2, LOW);
    } else if (digitalRead(button2) == 0) {
      buttonPressed = 1;
      digitalWrite(whiteLED1, LOW);
    }
  }

  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(1500);
  digitalWrite(whiteLED1, LOW);
  digitalWrite(whiteLED2, LOW);
  buttonPressed = 0;
}


// ADDITIONAL CODE
// 1. The button + serial monitor game

int Button = 8;
bool Buttonpressed = 0;
void setup() {
  Serial.begin(9600);
  pinMode(Button, INPUT_PULLUP);
}

void loop() {
  while (Buttonpressed == 0) {
    Serial.println("Hello world");
    delay(200);
    if (digitalRead(Button) == LOW) {
      Buttonpressed = 1; // indicates that the button as been pressed
      Serial.println("The button was pressed, game over!");
    }
  }
}
