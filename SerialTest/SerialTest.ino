#include <MQ2.h>
#include <Wire.h>
MQ2 mq2(Analog_Input);
void setup() {
Serial.begin(9600);

}

void loop() {
int[] i = 0;
int j =0;
 float* values= mq2.read(true); 
  
  lpg = mq2.readLPG();
  
  co = mq2.readCO();
  smoke = mq2.readSmoke();
  
  
  Serial.println(lpg);
  Serial.println(co);
  
  
  Serial.print(smoke);
  
  delay(1000);


}
