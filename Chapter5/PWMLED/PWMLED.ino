void setup() 
{
        pinMode(6, OUTPUT); 

}
void loop() 
{
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(6, fadeValue);         
    delay(30);                            
  } 

  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(6, fadeValue);         
    delay(30);                            
  } 
}
