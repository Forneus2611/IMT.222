// Definición de macros
#define POT A5
#define BR 9600
#define DEL 300
#define LED 5
// Baut rate BR normalmente se le pone 9600 pero esto depende del
// Microcontrolador
int potVal = 0;

void setup() {
  Serial.begin(BR);
  pinMode(LED, OUTPUT); // Configura el pin LED como salida
}

void loop() {
  potVal = analogRead(POT); // Lee el valor del potenciómetro (0-1023)

  // Mapear el valor del potenciómetro a un rango adecuado para PWM (0-255)
  int LedBri = map(potVal, 0, 1023, 0, 255);
  
  analogWrite(LED, LedBri); // Ajusta la intensidad del LED

  Serial.print("Valor del potenciómetro: ");
  Serial.println(potVal);

  delay(DEL);
}