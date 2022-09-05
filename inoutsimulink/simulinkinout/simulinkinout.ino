int out = 0;
int out1 = 0;

void setup() {
  // inicializar puerto serie
  Serial.begin(9600);
  // preparar output
}

void loop() {
  // leer del pin A0 como
  out = analogRead(A0);
  out1 = analogRead(A1);
  
  // enviar en base 10 en ASCII
  Serial.write(out);
  Serial.write(out1);
  // esperar para estabilizar el conversor
  delay(20);
}
