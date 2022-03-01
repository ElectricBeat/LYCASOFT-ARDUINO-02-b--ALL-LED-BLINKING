void setup() 
{
  DDRD = B11111111; 
}
void loop() 
{
  PORTD = B11111111;
  delay(1000);  
  PORTD = B00000000;
  delay(1000);  
}
