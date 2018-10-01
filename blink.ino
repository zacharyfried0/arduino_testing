/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin LED. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
#define LED 13

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED as an output.
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i=0; i <= 2; i++)// Start with the letter H, four quick dots
  {
    digitalWrite(LED, HIGH); 
    delay(500);              
    digitalWrite(LED, LOW);   
    delay(500); 
  }
  for (int i = 0; i <= 1; i++)
  {
    digitalWrite(LED, HIGH); 
    delay(500);            
    digitalWrite(LED, LOW);  // Finish the letter H and start the letter E, one quick dot
    delay(2000);             // Long delay for next letter
  }
       
  digitalWrite(LED, HIGH);   // Start the letter L
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
  
  digitalWrite(LED, HIGH);
  delay(1000);               //First long dash
  digitalWrite(LED, LOW);
  delay(500);
  
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
  
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);   // Finish First L
  delay(2000);              // Long delay before second L
  
  digitalWrite(LED, HIGH); // Start the second letter L
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
  
  digitalWrite(LED, HIGH);
  delay(1000);             //First long dash
  digitalWrite(LED, LOW);
  delay(500);
  
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
  
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW); 
  delay(2000);             // Long delay before next letter

  for (int i = 0; i <= 2; i++)
  {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
}
