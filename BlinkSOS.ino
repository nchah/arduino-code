/*
  Blink SOS
  - Derived from the "Blink" sketch. First try at Arduino code.

  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  // The first "S" block
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, HIGH);
  delay(100);               // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, LOW);
  delay(100);               // wait for a second

  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);

  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);
  delay(500);

  // The second "O" block 
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);

  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);

  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);
  delay(500);

  // The last "S" block
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);

  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);

  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(100);

  delay(1000);  // Long pause to differentiate SOS signals
}
