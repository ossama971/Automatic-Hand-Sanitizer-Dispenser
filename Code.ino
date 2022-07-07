int  trigPin=3;
  int echoPin=8;
  void setup(){
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    Serial.begin(9600);
  }

void loop() {

  
float duration, distance, velocity; digitalWrite(trigPin, LOW); delayMicroseconds(2); digitalWrite(trigPin, HIGH); delayMicroseconds(10); digitalWrite(trigPin, LOW); duration = pulseIn(echoPin, HIGH);
  // pulseIn is used to Reads a pulse (either HIGH or LOW) on a pin. //For example, if value is HIGH, pulseIn() waits for the pin to //go HIGH, starts timing, then waits for the pin to go LOW
//and stops timing.
//Returns the length of the pulse in microseconds distance=21;

velocity= 340.0;
distance=(velocity*duration)/(2*10000);
if (distance >= 400 || distance <= 2){
Serial.print("the distance you entered is out of range "); }
else {
Serial.print("DISTANCE = ");
Serial.print(distance);
Serial.println(" cm");
delay(500);
}
delay(500);
}
