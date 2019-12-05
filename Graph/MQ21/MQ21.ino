#include <MQ2.h>
MQ2 mq2(A0);
void setup() 
{
  Serial.begin(9600);
  mq2.begin();
}

void loop() 
{
  int i=0,j=0;
  i= mq2.readLPG();
  j= mq2.readSmoke();
  Serial.print(i);
  Serial.print(",");
  Serial.println(j);

  delay(100);
}
