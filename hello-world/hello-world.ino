void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(7, HIGH);  // LED ON
  delay(250);
  digitalWrite(7, LOW);  // LED OFF
  delay(250);

  digitalWrite(8, HIGH);  // LED ON
  delay(250);
  digitalWrite(8, LOW);  // LED OFF
  delay(250);

  digitalWrite(8, HIGH);  // LED ON
  delay(250);
  digitalWrite(8, LOW);  // LED OFF
  delay(250);

  digitalWrite(11, HIGH);  // LED ON
  delay(250);
  digitalWrite(11, LOW);  // LED OFF
  delay(250);

  digitalWrite(11, HIGH);  // LED ON
  delay(250);
  digitalWrite(11, LOW);  // LED OFF
  delay(250);

  digitalWrite(11, HIGH);  // LED ON
  delay(250);
  digitalWrite(11, LOW);  // LED OFF
  delay(250);
}