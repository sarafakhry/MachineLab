/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/


#include <Wire.h>
#include <Adafruit_MotorShield.h>

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield();
// Or, create it with a different I2C address (say for stacking)
// Adafruit_MotorShield AFMS = Adafruit_MotorShield(0x61);

// Connect a stepper motor with 200 steps per revolution (1.8 degree)
// to motor port #2 (M3 and M4)
Adafruit_StepperMotor *myMotor = AFMS.getStepper(200, 2);
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int sensorPin = A0;
int buttonPin = 8;
int buttonPin2 = 9;
int buttonPin3 = 10;
int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int sensorValue = analogRead(sensorPin);
const int stepsPerRevolution = 200;


void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(sensorPin, INPUT);
   sensorValue = analogRead(sensorPin);
  myMotor->setSpeed(10);  // 10 rpm
}

void loop() {

  buttonCmnd();
  button2Cmnd();
  rndmCmnd();

}

void buttonCmnd () {

  // square drawing
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    for (pos = 0; pos <= 80; pos += 1) {
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(5);
      delay(200);
      Serial.println("Double coil steps");
      myMotor->step(50, FORWARD, DOUBLE);
    }
  }
}


void button2Cmnd() {

  // original drawing

  buttonState2 = digitalRead(buttonPin2);

  if (buttonState2 == HIGH) {
    for (pos = 0; pos <= 80; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15ms for the servo to reach the position
    }
    delay(200);
    Serial.println("Double coil steps");
    myMotor->step(5, FORWARD, DOUBLE);

    for (pos = 80; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(5);                       // waits 15ms for the servo to reach the position
    }
    delay(200);
    Serial.println("Double coil steps");
    myMotor->step(5, FORWARD, DOUBLE);
  }
}

void rndmCmnd() {

  // square drawing with potentiometer
  buttonState3 = digitalRead(buttonPin3);
  sensorValue = analogRead(sensorPin);

  if (buttonState3 == HIGH) {
    sensorValue = analogRead(sensorPin);
    if ( sensorValue > 20 && sensorValue < 40) {
      for (pos = 0; pos <= 80; pos += 1) {
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(5);
        delay(200);
        Serial.println("Double coil steps");
        myMotor->step(50, FORWARD, DOUBLE);
      }
    }
    else  if ( sensorValue >= 40 && sensorValue < 60) {
        for (pos = 0; pos <= 80; pos += 1) {
          myservo.write(pos);              // tell servo to go to position in variable 'pos'
          delay(5);
          delay(200);
          Serial.println("Double coil steps");
          myMotor->step(70, FORWARD, DOUBLE);
        }
      }
        else  if ( sensorValue >= 60 && sensorValue < 80) {
          for (pos = 0; pos <= 80; pos += 1) {
            myservo.write(pos);              // tell servo to go to position in variable 'pos'
            delay(5);
            delay(200);
            Serial.println("Double coil steps");
            myMotor->step(90, FORWARD, DOUBLE);
          }
        }
        else {
            for (pos = 0; pos <= 80; pos += 1) {
              myservo.write(pos);              // tell servo to go to position in variable 'pos'
              delay(5);
              delay(200);
              Serial.println("Double coil steps");
              myMotor->step(120, FORWARD, DOUBLE);
            }
          }
        }
      }
    
  
