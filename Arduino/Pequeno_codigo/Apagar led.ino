// C++ code
//
#define  LED 13
#define  PUL  7
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PUL, INPUT);
}

void loop(){
  if(digitalRead(PUL)){
  	digitalWrite(LED,true);
  
  }else{
    digitalWrite(LED,0);
  }
}