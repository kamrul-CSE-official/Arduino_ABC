
int buyPrice, sellPrice, profit; 

void setup() {
  Serial.begin(9600);

  buyPrice = 500;
  sellPrice = 700;

  profit = sellPrice - buyPrice;
}

void loop() {
  Serial.print("\nProfit is: ");
  Serial.println(profit);

  sellPrice + 2;
  buyPrice - 1;

  delay(1000);
}
