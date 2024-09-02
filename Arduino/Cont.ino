#define PULS 2
unsigned int cont=0;


void setup(){
    pinMode(PULS,INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(PULS),interrumpir,FALLING)
}
void loop(){

}
void interrumpir(){
    cont+=1;
}