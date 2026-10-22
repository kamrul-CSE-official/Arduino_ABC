

int temp = 25;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  if(temp <= 20){
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }else {
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
