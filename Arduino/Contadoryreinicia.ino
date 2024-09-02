
#define PUL  3
#define RESET_BUTTON 2 // Definimos el pin para el botón de reinicio
#define TIME 1000

volatile bool flag = false;
volatile int cont = 0;

void setup() {
 
  pinMode(PUL, INPUT);
  pinMode(RESET_BUTTON, INPUT_PULLUP); // Usamos INPUT_PULLUP para evitar que el pin quede flotante
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(PUL), interrumpir, FALLING);
  attachInterrupt(digitalPinToInterrupt(RESET_BUTTON), resetContador, FALLING);
}

void loop() {

  // Mostrar el contador en el monitor serial
  Serial.print("Pulsaciones: ");
  Serial.println(cont);
  delay(TIME); // Espera un segundo antes de actualizar de nuevo
}

void interrumpir() {
  flag = !flag;
  
  if (flag) {
    cont++;
    flag = false;
  } else {
    flag = true;
  }
}

void resetContador() {
  cont = 0; // Reinicia el contador
}
