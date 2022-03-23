void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial1.begin(9600);
  //Serial1.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);      // set LED pin as output
  digitalWrite(LED_BUILTIN, LOW);    // switch off LED pin1
}

void loop() {
  // put your main code here, to run repeatedly:
  // char receivedData
  char receivedData;

  while (Serial1.available())
  {
    int inByte = Serial1.read();
    Serial1.print(inByte);
    Serial1.print("abc");
    int sensorValue = analogRead(A0);
    Serial1.print("sensorValue");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(10);
    digitalWrite(LED_BUILTIN, LOW);
  }
}
