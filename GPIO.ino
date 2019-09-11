int D7   = A2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(D7);     // read the input pin
  
    Serial.println(val);
}
