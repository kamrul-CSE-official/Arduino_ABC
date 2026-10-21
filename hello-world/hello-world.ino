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
  // analogWrite(11, 0);  // LED ON
  delay(100);
  analogWrite(11, 10);  // LED ON
  delay(100);
  analogWrite(11, 20);  // LED ON
  delay(100);
  analogWrite(11, 30);  // LED ON
  delay(100);
  analogWrite(11, 40);  // LED ON
  delay(100);
  analogWrite(11, 50);  // LED ON
  delay(100);
  analogWrite(11, 50);  // LED ON
  delay(100);
  analogWrite(11, 60);  // LED ON
  delay(100);
  analogWrite(11, 100);  // LED ON
  delay(100);
  analogWrite(11, 150);  // LED ON
  delay(100);
  analogWrite(11, 200);  // LED ON
  delay(100);
  analogWrite(11, 210);  // LED ON
  delay(100);
  analogWrite(11, 230);  // LED ON
  delay(100);
  analogWrite(11, 250);  // LED ON
  delay(100);
  analogWrite(11, 255);  // LED ON
  delay(100);
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