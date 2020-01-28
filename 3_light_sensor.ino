int sensorPin = A5; 
int sensorValue;
int led = 13;  


void setup() {
 Serial.begin(9600);
 pinMode(13, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("light : ");
 Serial.println(sensorValue);
 
 if (sensorValue>800ppp) {
 digitalWrite(led, HIGH); 
 }
 else {
 digitalWrite(led, LOW); 
 }
 
 delay(1000); 
}
