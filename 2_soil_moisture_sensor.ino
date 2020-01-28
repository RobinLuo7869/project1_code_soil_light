int sensorPin = A0; 
int sensorValue;
int led = 13;  


void setup() {
 Serial.begin(9600);
 pinMode(13, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("water : ");
 Serial.println(sensorValue);
 
 if (sensorValue<300) {
 digitalWrite(led, HIGH); 
 }
 else {
 digitalWrite(led, LOW); 
 }
 
 delay(1000); 
}
