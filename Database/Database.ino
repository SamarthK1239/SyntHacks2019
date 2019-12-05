
void setup() 
{
  Serial.begin(9600);
 
}

void loop() 
{
  int i=0,j=0;
  i= analogRead(A0);
  j= analogRead(A1);
  Serial.print(i);
  Serial.print(",");
  Serial.println(j);

  delay(100);
}
