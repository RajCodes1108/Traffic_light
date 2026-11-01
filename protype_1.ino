// Traffic light: red, green, yellow, over and over.
const int RED = 11, YELLOW = 12, GREEN = 13;

void light(int pin, int ms) {
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  light(RED, 2000);
  light(GREEN, 2000);
  light(YELLOW, 2000);
}
