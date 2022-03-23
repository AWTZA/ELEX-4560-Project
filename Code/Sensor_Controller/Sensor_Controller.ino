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

  while (1)//Serial1.available()
  {
<<<<<<< HEAD
    int inByte = Serial1.read();
    Serial1.print(inByte);
    Serial1.print("abc");
    int sensorValue = analogRead(A0);
    Serial1.print("sensorValue");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(10);
=======
    int Message_In = Serial1.read();
    //Serial1.print(inByte);
    //Serial1.print("abc");
    int Sound_Value = analogRead(A7);
    int Water_Value = analogRead(A6);
    //float voltage = sensorValue * (5.0 / 1023.0);
    if(Sound_Value>220){
      Serial1.println(Sound_Value);
      delay(200);
    }
    if(Water_Value<720){
      Serial1.println(Water_Value);
      delay(200);
    }
    
>>>>>>> 704eb7e524d1d7d40bd458ad4a937b11d9518532
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
    //delay(1000);
    
  }
}
