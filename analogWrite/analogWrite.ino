
#define LED_PIN 11
int brightness = 255;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  brightness--;
  analogWrite(LED_PIN, brightness);
  delay(100);



}
