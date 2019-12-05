int lh1 = 2;
int lh2 = 3;
int lh3 = 4;
int lh4 = 5;
int lh5 = 6;
int lh6 = 7;
int lh7 = 8;
int lh8 = 9;
int rh1 = 1;
int rh2 = 11;
int rh3 = 12;
int rh4 = 13;
void setup() {
pinMode(lh1, INPUT); 
pinMode(lh2, INPUT);
pinMode(lh3, INPUT);pinMode(lh4, INPUT);

pinMode(lh5, INPUT);
pinMode(lh6, INPUT);
pinMode(lh7, INPUT);
pinMode(lh8, INPUT);

pinMode(rh1, INPUT);
pinMode(rh2, INPUT);
pinMode(rh3, INPUT);
pinMode(rh4, INPUT);
Serial.begin(96);  
}

void loop() {
int state1 = digitalRead(lh1);
int state2 = digitalRead(lh2);
int state3 = digitalRead(lh3);
int state4 = digitalRead(lh4);
int state5 = digitalRead(lh5);
int state6 = digitalRead(lh6);
int state7 = digitalRead(lh7);
int state8 = digitalRead(lh8);
int state9 = digitalRead(rh1);
int state10 = digitalRead(rh2);
int state11 = digitalRead(rh3);
int state12 = digitalRead(rh4);

//-------------------------------------------------------------------- Finger 1 on right hand
  if(state1 != HIGH  and state9 != HIGH ){
    Serial.println("A");
  }
  else if(state2 != HIGH  and state9 != HIGH ){
    Serial.println("B");
  }
  else if(state3 != HIGH  and state9 != HIGH ){
    Serial.println("C");
  }
  else if(state4 != HIGH  and state9 != HIGH ){
    Serial.println("D");
  }
  else if(state5 != HIGH  and state9 != HIGH ){
    Serial.println("Q");
  }
  else if(state6 != HIGH  and state9 != HIGH ){
    Serial.println("R");
  }
  else if(state7 != HIGH  and state9 != HIGH ){
    Serial.println("S");
  }
    Serial.println("T");
  else if(state8 != HIGH  and state9 != HIGH ){
  }
  
//--------------------------------------------------------------------  Finger 2 on right hand
  else if(state1 != HIGH  and state1 != HIGH ){
    Serial.println("E");
  }
  else if(state2 != HIGH  and state1 != HIGH ){
    Serial.println("F");
  }
  else if(state3 != HIGH  and state1 != HIGH ){
    Serial.println("G");
  }
  else if(state4 != HIGH  and state1 != HIGH ){
    Serial.println("H");
  }
  else if(state5 != HIGH  and state1 != HIGH ){
    Serial.println("U");
  }
  else if(state6 != HIGH  and state1 != HIGH ){
    Serial.println("V");
  }
  else if(state7 != HIGH  and state1 != HIGH ){
    Serial.println("W");
  }
  else if(state8 != HIGH  and state1 != HIGH ){
    Serial.println("X");
  }

//-------------------------------------------------------------------- Finger 3 on right hand
  else if(state1 != HIGH  and state11 != HIGH ){
    Serial.println("I");
  }
  else if(state2 != HIGH  and state11 != HIGH ){
    Serial.println("J");
  }
  else if(state3 != HIGH  and state11 != HIGH ){
    Serial.println("K");
  }
  else if(state4 != HIGH  and state11 != HIGH ){
    Serial.println("L");
  }
  else if(state5 != HIGH  and state11 != HIGH ){
    Serial.println("Y");
  }
  else if(state6 != HIGH  and state11 != HIGH ){
    Serial.println("Z");
  }
  else if(state7 != HIGH  and state11 != HIGH ){
    Serial.println("NOTHING");
  }
  else if(state8 != HIGH  and state11 != HIGH ){
    Serial.println("NOTHING");
  }

//-------------------------------------------------------------------- Finger 4 on right hand
  else if(state1 != HIGH  and state12 != HIGH ){
    Serial.println("M");
  }
  else if(state2 != HIGH  and state12 != HIGH ){
    Serial.println("N");
  }
  else if(state3 != HIGH  and state12 != HIGH ){
    Serial.println("O");
  }
  else if(state4 != HIGH  and state12 != HIGH ){
    Serial.println("P");
  }
  
  
 //-------------------------------------------------------------------- Spacebar function 
 else if(state5 != HIGH  and state12 != HIGH ){
    Serial.println("SPACE");
  }
  else if(state6 != HIGH  and state12 != HIGH ){
    Serial.println("SPACE");
  }
  else if(state7 != HIGH  and state12 !== HIGH ){
    Serial.println("SPACE");
  }
 else if(state8 != HIGH  and state12 != HIGH ){
    Serial.println("SPACE");
  }
 else{
  Serial.println("Command not understood"); 
 }
delay(1);
}
