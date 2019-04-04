uint8_t buf[8] = {0 };   /* Keyboard report buffer */

void setup() 
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  delay(200);
}

void loop() 
{
  int randomChar = 65;//random(4, 130);

  delay(1000);

  buf[2] = randomChar;    // Random character
  Serial.write(buf, 8); // Send keypress
  releaseKey();
}

void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Release key  
}
