void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial1.begin(9600);
  //Serial1.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);      // set LED pin as output
  pinMode(14,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(18,OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);    // switch off LED pin1
  digitalWrite(14, LOW);
  digitalWrite(16, LOW);
  digitalWrite(18, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  // char receivedData
  char receivedData;

  while (1)//Serial1.available()
  {
    int inByte = Serial1.read();

    digitalWrite(LED_BUILTIN, HIGH);
    delay(10);

    int Message_In = Serial1.read();
    //Serial1.print(inByte);
    int Sound_Value = analogRead(A7);
    int Water_Value = analogRead(A6);
    //float voltage = sensorValue * (5.0 / 1023.0);
    if(Sound_Value>220){
      Serial1.println(Sound_Value);
      delay(200);
    }
    if(Water_Value<700){
      Serial1.println(Water_Value);
      delay(200);
    }
    
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(16, LOW);
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(16, HIGH);
    //delay(1000);
    
  }
}
