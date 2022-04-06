void setup() {
  // put your setup code here, to run once:

  Serial1.begin(9600);
  //Serial1.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);      // set LED pin as output
  pinMode(14, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(20, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);    // switch off LED pin1
  digitalWrite(14, LOW); //status green
  digitalWrite(16, LOW); //alarm red
  digitalWrite(18, LOW); //yellow
  digitalWrite(20, LOW); //yellow
}

void loop() {
  // put your main code here, to run repeatedly:
  // char receivedData
  char receivedData;
  digitalWrite(LED_BUILTIN, HIGH);
  while (Serial1.available() == 0) //
  {
    //int inByte = Serial1.read();


  

  //Serial1.print(inByte);
  int sensor_value = analogRead(A7);
  sensor_value = abs(sensor_value - 950);
  String num = String(sensor_value);
  String send = "Wate_Leak_Sensor:" + num  ;

  //float voltage = sensorValue * (5.0 / 1023.0);
  Serial1.println(send);
  //Serial1.print(sensor_value);
  //Serial1.println();


  if (sensor_value > 300) { //>675 for temp; <600 for water
    Serial1.println("XxxX");
    digitalWrite(16, HIGH);
    digitalWrite(18, HIGH);
    delay(1000);
    
  }
  digitalWrite(14, LOW);
  delay(200);
  digitalWrite(14, HIGH);
  digitalWrite(16, LOW);
  digitalWrite(18, LOW);
  delay(200);
  //   digitalWrite(LED_BUILTIN, LOW);
  }
  //delay(1000);




String inByte = Serial1.readString( ); 

int var = inByte.indexOf("x");
Serial1.println(var); 
if (var > 0) {
  for (int x = 0; x < 3; x++) {
    digitalWrite(16, HIGH);
    delay(500);
    digitalWrite(16, LOW);
    delay(500);
  }
}
}

/*

       int Water_Value = analogRead(A6);
    if(Water_Value<700){
      Serial1.println(Water_Value);
      delay(200);
    }

*/
