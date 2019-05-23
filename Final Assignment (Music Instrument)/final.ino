// BACKWARD el awal means nahyet foo2

#include <Servo.h>
Servo myservo;
Servo myservo2;

int pos = 83;
int pos2 = 80;
const int startpos2 = 80;
const int startpos = 83;

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include <AccelStepper.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

Adafruit_StepperMotor *myMotor = AFMS.getStepper(100, 1);
Adafruit_StepperMotor *myMotor2 = AFMS.getStepper(100, 2);

const int InterstellarButton = 12;


int buttonState2 = 0;



void setup() {
  myservo.attach(9);
  myservo2.attach(10);
  myservo.write(pos);
  myservo2.write(pos2);
  Serial.begin(9600);           // set up Serial library at 9600 bps
  AFMS.begin();  // create with the default frequency 1.6KHz

myMotor->setSpeed(10); 
myMotor2->setSpeed(10);   
}

void loop() {

  
  InterstellarCmnd(); // Interstellar theme command

}



void InterstellarCmnd () {

  buttonState2 = digitalRead(InterstellarButton);

  if (buttonState2 == HIGH) {
    myservo.write(startpos);
    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .         // PLUCK E
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(BACKWARD, SINGLE);                              // MOVES TO F#
      myMotor->onestep(FORWARD, SINGLE);
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .   // PLUCKS F#
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    delay(500);
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(FORWARD,SINGLE);                 // MOVES TO E
      myMotor->onestep(BACKWARD, SINGLE);
    }
    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .   // PUCKS E
      delay(15);                       // waits 15ms for the servo to reach the position
    }

    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(BACKWARD, SINGLE);              // MOVES TO F#
      myMotor->onestep(FORWARD, SINGLE);
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .    // PLUCKS F#
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 120; i++) {
      myMotor2->onestep(BACKWARD, SINGLE);                        // MOVES TO G
      myMotor->onestep(FORWARD, SINGLE);
    }
    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .       // PLUCKS G
      delay(15);                       // waits 15ms for the servo to reach the position
    }


    for (int i = 0; i < 120; i++) {
      myMotor2->onestep(FORWARD, SINGLE);                         // MOVES TO F#
      myMotor->onestep(BACKWARD, SINGLE);
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .   // PLUCKS F#
      delay(15);                       // waits 15ms for the servo to reach the position
    }


    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(FORWARD, SINGLE);         // MOVES TO E
      myMotor->onestep(BACKWARD, SINGLE);
    }
    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS E
     delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(BACKWARD, SINGLE);
      myMotor->onestep(FORWARD, SINGLE);           // MOVES TO F#
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .   // PLUCKS F#
      delay(15);                      // waits 15ms for the servo to reach the position
    }

    for (int i = 0; i < 120; i++) {
      myMotor2->onestep(BACKWARD, SINGLE);          // MOVES TO G
      myMotor->onestep(FORWARD, SINGLE);
    }

    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .    // PLUCKS G
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    delay(1000);

    for (int i = 0; i < 120; i++) {
      myMotor2->onestep(FORWARD, SINGLE);                  // MOVES TO F#
      myMotor->onestep(BACKWARD, SINGLE);
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS F#
     delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(FORWARD, SINGLE);         // MOVES TO E
      myMotor->onestep(BACKWARD, SINGLE);
    }
    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS E
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(BACKWARD, DOUBLE);         // MOVES TO B on other string
      myMotor->onestep(FORWARD, DOUBLE);
    }
  for (pos2 = 80; pos2 <= 113; pos2 += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
      delay(15);                      // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(FORWARD, DOUBLE);         // MOVES TO E
      myMotor->onestep(BACKWARD, DOUBLE);
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS E
      delay(15);                      // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(BACKWARD, DOUBLE);         // MOVES TO B
      myMotor->onestep(FORWARD, DOUBLE);
    }
    for (pos2 = 113; pos2 >= 80; pos2 -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
     delay(15);                    // waits 15ms for the servo to reach the position
    }
    delay(800);

    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS F#
      delay(30);                       // waits 15ms for the servo to reach the position
    }
    delay(800);
    for (pos2 = 80; pos2 <= 113; pos2 += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
      delay(30);                       // waits 15ms for the servo to reach the position
    }
    delay(800);
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS F#
      delay(30);                       // waits 15ms for the servo to reach the position
    }
    delay(500);
      for (pos2 = 113; pos2 >= 80; pos2 -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
      delay(30);                       // waits 15ms for the servo to reach the position
    }

    for (int i = 0; i < 120 ; i++) {
      myMotor2->onestep(BACKWARD, DOUBLE);         // MOVES TO G
      myMotor->onestep(FORWARD, DOUBLE);
    }
    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS G
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 120; i++) {
      myMotor2->onestep(FORWARD, DOUBLE);         // MOVES TO B
      myMotor->onestep(BACKWARD, DOUBLE);
    }
    for (pos2 = 80; pos2 <= 113; pos2 += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
      delay(15);                       // waits 15ms for the servo to reach the position
    }

      for (int i = 0; i < 120 ; i++) {
      myMotor2->onestep(BACKWARD, DOUBLE);         // MOVES TO G
      myMotor->onestep(FORWARD, DOUBLE);
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS G
     delay(30);                     // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 120; i++) {
      myMotor2->onestep(FORWARD, DOUBLE);         // MOVES TO B
      myMotor->onestep(BACKWARD, DOUBLE);
    }
    for (pos2 = 113; pos2 >= 80; pos2 -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
      delay(30);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280 ; i++) {
      myMotor2->onestep(FORWARD, DOUBLE);         // MOVES TO A
      myMotor->onestep(BACKWARD, DOUBLE);
    }

    for (pos2 = 80; pos2 <= 113; pos2 += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS A
      delay(15);                      // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(BACKWARD, DOUBLE);         // MOVES TO B
      myMotor->onestep(FORWARD, DOUBLE);
    }
    for (pos2 = 113; pos2 >= 80; pos2 -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
      delay(15);                       // waits 15ms for the servo to reach the position
    }
          for (int i = 0; i < 280 ; i++) {
       myMotor2->onestep(FORWARD, DOUBLE);         // MOVES TO A
      myMotor->onestep(BACKWARD, DOUBLE);
    }

    for (pos2 = 80; pos2 <= 113; pos2 += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS A
     delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(BACKWARD, DOUBLE);         // MOVES TO B
      myMotor->onestep(FORWARD, DOUBLE);
    }
    for (pos2 = 113; pos2 >= 80; pos2 -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo2.write(pos2);              // tell servo to go to position in variable 'pos' .      // PLUCKS B
      delay(15);                      // waits 15ms for the servo to reach the position
    }
delay(400);
    for (pos = 83; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS F#
      delay(30);                      // waits 15ms for the servo to reach the position
    }
    for (int i = 0; i < 280; i++) {
      myMotor2->onestep(FORWARD, DOUBLE);         // MOVES TO E
      myMotor->onestep(BACKWARD, DOUBLE);
    }
    for (pos = 110; pos >= 83; pos -= 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos' .      // PLUCKS E
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    myservo.write(startpos);
  }
}
