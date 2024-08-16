#define LED 13
#define TIMELED 1000
#define BOTON 2
//hola


void setup(){
  pinMode(LED,OUTPUT);
  pinMode(BOTON,INPUT);

}
void loop(){
  byte dato = digitalWrite(BOTON);
  if(dato==0){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
 


}