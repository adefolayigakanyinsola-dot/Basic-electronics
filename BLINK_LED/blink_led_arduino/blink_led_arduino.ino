void setup() {
   pinMode(13, OUTPUT);
   Serial.begin(9600);
}

int n = 0;
void loop() {
  Serial.print("LOOP COUNT: [");
  Serial.print(n);
  Serial.println("]");
  n = n + 1;

  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  
}
