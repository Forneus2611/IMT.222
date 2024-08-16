#define LED 13
#define TIMELED 1000
//hola


void setup(){
  pinmode(LED,OUTPUT);

}
void loop(){
  digitalWrite(LED, true);
  delay(TIMELED);
  digitalWrite(LED, false);
  delay(TIMELED);

}