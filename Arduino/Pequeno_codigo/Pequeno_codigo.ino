
#define Motor 9

void setup() {

  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  

  delay(5000);

  digitalWrite(9, LOW);
  
  delay(1000)
  
}
