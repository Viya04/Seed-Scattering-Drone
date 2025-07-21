#include <Servo.h> 
 
Servo seedServo;  // create servo object 
 
// Define angles 
const int restPosition = 0;      // resting position of servo 
const int releasePosition = 90;  // position to drop seeds 
 
// Interval settings 
const unsigned long dropInterval = 6000; // time between 
drops (in ms) 
unsigned long lastDropTime = 0; 
 
void setup() { 
  seedServo.attach(9);       // attach servo to pin 9 
  seedServo.write(restPosition); // move to resting position 
  delay(1000);               // wait for servo to settle 
} 
 
void loop() { 
  unsigned long currentTime = millis(); 
 
  if (currentTime - lastDropTime >= dropInterval) { 
    dropSeed(); 
    lastDropTime = currentTime; 
  } 
} 
 
void dropSeed() { 
  seedServo.write(releasePosition);  // move to release 
position 
  delay(1000);                       // wait for seed to fall 
  seedServo.write(restPosition);     // return to rest 
  delay(500);                        // short delay to 
stabilize 
}
