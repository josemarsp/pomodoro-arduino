int ddd = 300;
void ledBoolean(boolean val) {
  if (val) {
    digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  } else {
    digitalWrite(5, LOW);   // turn the LED on (LOW is the voltage level)
    digitalWrite(6, LOW);   // turn the LED on (LOW is the voltage level)
    digitalWrite(9, LOW);   // turn the LED on (LOW is the voltage level)
    digitalWrite(10, LOW);   // turn the LED on (LOW is the voltage level)
  }
}

void ledLoop(boolean val) {
  if (val) {
    digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(ddd);
    digitalWrite(5, LOW);   // turn the LED on (LOW is the voltage level)
    digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(ddd);
    digitalWrite(6, LOW);   // turn the LED on (LOW is the voltage level)
    digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(ddd);
    digitalWrite(9, LOW);   // turn the LED on (LOW is the voltage level)
    digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(ddd);
    digitalWrite(10, LOW);   // turn the LED on (LOW is the voltage level)
  }
}


//  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(200);                       // wait for a second
//  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
//  delay(200);
//  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(200);                       // wait for a second
//  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
//  delay(200);
//  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(200);                       // wait for a second
//  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
//  delay(200);
//  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(200);                       // wait for a second
//  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
//  delay(200);
//}
