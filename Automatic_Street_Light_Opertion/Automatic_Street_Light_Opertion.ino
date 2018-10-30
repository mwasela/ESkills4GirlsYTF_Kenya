
int sensorPin = A0;
int sensorValue = 0;
int ledPin = 8;

void setup() {
   Serial.begin(9600);
   pinMode(sensorPin, INPUT); 
  pinMode(ledPin, OUTPUT);
}
 
void loop() {
   sensorValue = analogRead(sensorPin);
   Serial.println(sensorValue);

   if (sensorValue < 200){
    digitalWrite(ledPin, LOW);
       
       }else if(sensorValue > 200){
       digitalWrite(ledPin, HIGH); 
      
        }
   }
