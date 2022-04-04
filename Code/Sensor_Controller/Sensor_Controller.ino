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
  digitalWrite(14, LOW); //status
  digitalWrite(16, LOW); //alarm
  digitalWrite(18, LOW); //yellow
}

void loop() {
  // put your main code here, to run repeatedly:
  // char receivedData
  char receivedData;
  digitalWrite(14, HIGH); //status

  while (1)//Serial1.available()
  {
    //int inByte = Serial1.read();

    digitalWrite(LED_BUILTIN, HIGH);

    int Message_In = Serial1.read();
    if(Message_In == "A"){
      digitalWrite(16, HIGH);
      delay(200);
    }
    //Serial1.print(inByte);
    int Tem_value = analogRead(A7);
    
    //float voltage = sensorValue * (5.0 / 1023.0);
    Serial1.println(Tem_value);
    if(Tem_value>35){
      digitalWrite(16, HIGH);
      delay(500);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(16, LOW);
    delay(500);
 //   digitalWrite(LED_BUILTIN, LOW);
    
    //delay(1000);
    
  }
}

/*
 * 
 *     int Water_Value = analogRead(A6);
    if(Water_Value<700){
      Serial1.println(Water_Value);
      delay(200);
    }

*/
 
