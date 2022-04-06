  #include <SoftwareSerial.h>


void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(18, OUTPUT);
  //Serial1.begin(9600);
  //Serial1.begin(9600);

  



}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(14, HIGH); //status
  digitalWrite(LED_BUILTIN, HIGH);
 digitalWrite(18, HIGH);
  
  Serial1.println("123");
  delay(500);
  //digitalWrite(LED_BUILTIN, LOW);
   digitalWrite(18, LOW);
    delay(500);
   // digitalWrite(LED_BUILTIN, HIGH);
}

/*  pinMode(14,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(18,OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);    // switch off LED pin1
  digitalWrite(14, LOW); //status
  digitalWrite(16, LOW); //alarm
  digitalWrite(18, LOW); //yellow
  */
  
