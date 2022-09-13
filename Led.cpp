
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // Inicializa o led interno do ESP8266

void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // Desliga o LED
  delay(1000);                      // Aguarda 1 segundo
  digitalWrite(LED_BUILTIN, HIGH);  // Liga o led depois de 1 segundo
  delay(2000);                      // Aguarda 2 segundo e retorna ao loop
}