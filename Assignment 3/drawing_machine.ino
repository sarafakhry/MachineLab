
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
int buttonPin1 = 8;
int buttonPin2 = 9;
int buttonPin3 = 11;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int sensorPin = A1;
int sensorValue = 0;
int outputValue = 0;
int Distance = 0;



int pos = 0;
int pos2 = 115;
int pos3 = 87;
// variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  myservo.write(pos);
  Serial.begin(9600);
  myMotor->setSpeed(10);  // 10 rpm
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  sensorValue = analogRead(sensorPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);

  if (buttonState1 == HIGH) {

    for (pos = 0; pos <= 120; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(3);                       // waits 15ms for the servo to reach the position
    }
    delay(200);
    myMotor->step(5, FORWARD, DOUBLE);

    for (pos = 120; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(3);                       // waits 15ms for the servo to reach the position
    }
    delay(200);
    myMotor->step(10, BACKWARD, DOUBLE);
    Serial.println("Sun drawing is working");
  }
  else if (buttonState2 == HIGH) {
    myservo.write(pos2);
    for (pos2 = 115; pos2 >= 90; pos2 -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos2);              // tell servo to go to position in variable 'pos'
      delay(3);
      myMotor->step(200, FORWARD, DOUBLE);
      Serial.println("kowar is working");

    }
    Serial.println("Stop");

  }
  else if (buttonState3 == HIGH) {

    // BUTTON NOT WORKING SO REMOVED FROM FINAL CODE
    //     myservo.write(pos3);

    //   myMotor->step(100, FORWARD, DOUBLE);
    //   for (pos3 = 70; pos3 >= 40; pos3 -= 1) {
    //      myservo.write(pos3);              // tell servo to go to position in variable 'pos'
    //      delay(5);
    //   }
    //    for (pos3 = 40; pos3 <= 70; pos3 += 1) { // goes from 180 degrees to 0 degrees
    //    myservo.write(pos3);              // tell servo to go to position in variable 'pos'
    //    delay(15);
    //    }
    //    for (pos3 = 90; pos3 >= 0; pos3 -=1) {
    //      myservo.write(pos3);
    //      delay(5);
    //    }
    //   delay(200);
    //      myMotor->step(100, FORWARD, DOUBLE);
    //      Serial.println("Saturn Drawing");
    //
  }

  else if (outputValue >= 200) {
    myservo.write(pos3);
    myMotor->step(100, FORWARD, DOUBLE);
    for (pos3 = 87; pos3 <= 120; pos3 += 1) {
      myservo.write(pos3);              // tell servo to go to position in variable 'pos'
      delay(5);
    }
    for (pos3 = 120; pos3 >= 60; pos3 -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos3);              // tell servo to go to position in variable 'pos'
      delay(5);
    }
    for (pos3 = 60; pos3 <= 87; pos3 += 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos3);              // tell servo to go to position in variable 'pos'
      delay(5);
    }



  }
}
