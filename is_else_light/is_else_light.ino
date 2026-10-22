String message = "on";
int LED = 8;

void setup() {
  Serial.begin(9600);

  pinMode(LED, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    message = Serial.readStringUntil('\n');
    message.trim();

    if (message.equalsIgnoreCase("ON")) {
      digitalWrite(LED, HIGH);
    } else if (message.equalsIgnoreCase("OFF")) {
      digitalWrite(LED, LOW);
    }

    Serial.print("Arduino Response: ");
    Serial.println(message);
  }
}