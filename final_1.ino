
#include <Servo.h>

Servo myservo;
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 11;     // the number of the pushbutton pin
const int buttonPin2 = 12;
// variables will change:
int buttonState = 0;
int pos = 90;
const int ledpin = 8;
int buttonState2 = 0;
int pos2 = 90;

void setup() {
  // initialize the LED pin as an output:
  myservo.attach(9);
  pinMode(ledpin, OUTPUT);
  myservo.write(pos);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {
    digitalWrite(ledpin, HIGH);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }

  if (buttonState == HIGH) {

    // turn LED on:
    for (pos = 90; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(3);
      
    }
    myservo.write(pos2);
  }
}

// blue for led at 8
// green for led button 12
// yellow for button that makes it work at 11
