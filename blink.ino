/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH); // Start with the letter H, four quick dots
  delay(500);              
  digitalWrite(13, LOW);   
  delay(500);             
  digitalWrite(13, HIGH);  
  delay(500);             
  digitalWrite(13, LOW);   
  delay(500);               
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH); 
  delay(500);            
  digitalWrite(13, LOW);  // Finish the letter H
  delay(2000);            // Long delay for next letter
  digitalWrite(13, HIGH); // Start the letter E, one quick dot
  delay(500);
  digitalWrite(13, LOW);
  delay(2000);            // Long delay for next letter
  digitalWrite(13, HIGH); // Start the letter L
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);            //First long dash
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW); // Finish First L
  delay(2000);           // Long delay before second L
  digitalWrite(13, HIGH); // Start the second letter L
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);            //First long dash
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW); 
  delay(2000);           // Long delay before next letter
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
}
