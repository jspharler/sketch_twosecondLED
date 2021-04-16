void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); // set the LED on
  delay(2000);                     // wait for two seconds
  digitalWrite(LED_BUILTIN, LOW);  // set the LED off
  delay(2000);                     // wait for two seconds.
}
