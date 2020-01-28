int Value_A0;
int Value_A5;
int Pin_A0 = 13;
int Pin_A5 = 9;

void setup() {

  Serial.begin(9600);   //Start serial monitor
  pinMode(Pin_A0,OUTPUT);
  pinMode(Pin_A5,OUTPUT);
  pinMode(A0,INPUT);
  
}

void loop() {
  
                     
 Value_A0 = analogRead(0);      
      

  digitalWrite(Pin_A5, HIGH);     
  delay(1000);                    
  Value_A5= analogRead(0);       
  digitalWrite(Pin_A5, LOW);      
  delay(1000);                     
  
  //Print the results to the serial monitor
  Serial.print("A0 = ");   
  Serial.print(Value_A0);
  Serial.print(" A5 = ");   
  Serial.println(Value_A5/2);

   if (Value_A0<500) {
 digitalWrite(Pin_A0, HIGH); 
 }
 else {
 digitalWrite(Pin_A0, LOW); 
 }
 delay(1000);
    
}
