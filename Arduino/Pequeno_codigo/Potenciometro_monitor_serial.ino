// C++ code
#define POT A5

int potVal = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(POT);

  
  Serial.print("Valor del potenciómetro: ");
  Serial.println(potVal);

  delay(1000);
}
