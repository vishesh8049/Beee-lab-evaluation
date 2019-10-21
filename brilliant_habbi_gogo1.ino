void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(10,OUTPUT);
  
}

void loop()
{
  int i;
  int s=analogRead(A0);
  Serial.println(s);
  for(i=0;i<=60;i++)
  {
    if(s>250)
    {
   digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
      delay(1000);
    }
    
    else if(s<250)
    {
      digitalWrite(13,LOW);
    }
   else
   {
  digitalWrite(10,HIGH);
     delay(1000);
     digitalWrite(10,LOW);
     delay(1000);
   }
  }
}