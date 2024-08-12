
#define Motor 9
#define del 5000
#define del2 1000

void setup() {

  pinMode(Motor, OUTPUT);
}

void loop() {
  digitalWrite(Motor, HIGH);
  

  delay(del);

  digitalWrite(Motor, LOW);
  
  delay(del2)
  
}
