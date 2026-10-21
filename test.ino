void setup() {
  pinMode(6, OUTPUT);
}

void loop() {
  digitalWrite(6, HIGH); // LED ON
  delay(1000);

  digitalWrite(6, LOW);  // LED OFF
  delay(1000);
}