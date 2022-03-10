/*

C++ code

Created on March 7 2022
By Infinity de Guzman

*/

int red = 7;
int blue = 6;
int green = 5;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  

  digitalWrite(blue, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blue, LOW);
  delay(1000); // Wait for 1000 millisecond(s)


  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
 }
