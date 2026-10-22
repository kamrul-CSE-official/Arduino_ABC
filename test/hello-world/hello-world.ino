
#define LED1 7
#define LED2 8
#define BUZZER 11

// Happy Birthday melody
int melody[] = {
  262, 262, 294, 262, 349, 330,
  262, 262, 294, 262, 392, 349,
  262, 262, 523, 440, 349, 330, 294,
  466, 466, 440, 349, 392, 349
};

// Note durations in milliseconds
int duration[] = {
  250, 250, 500, 500, 500, 1000,
  250, 250, 500, 500, 500, 1000,
  250, 250, 500, 500, 500, 500, 1000,
  250, 250, 500, 500, 500, 1000
};

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int totalNotes = sizeof(melody) / sizeof(melody[0]);

  for (int i = 0; i < totalNotes; i++) {
    // Blink LEDs with the music
    digitalWrite(LED1, (i % 2 == 0) ? HIGH : LOW);
    digitalWrite(LED2, (i % 2 == 1) ? HIGH : LOW);

    tone(BUZZER, melody[i]);
    delay(duration[i]);

    noTone(BUZZER);
    delay(80);
  }

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(2000);
}
