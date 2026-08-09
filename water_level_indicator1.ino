// C++ code
//

int LevelSensorVal = 0;

int echoPin = 0;

int triggerPin = 0;

long readUltraSonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT); // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
 
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
}

void loop()
{
  echoPin = 3;
  triggerPin = 2;
  LevelSensorVal = 0.01723 * readUltraSonicDistance(2, 3);
  Serial.println("Level control system");
  Serial.println(LevelSensorVal);
  if (LevelSensorVal >= 300) {
    Serial.println("WATER LEVEL IS EMPTY");
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(12, LOW);
    delay(20);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(12, LOW);
    delay(20);
    tone(5, 25, 1000); //play tone 5 (D#0 = 25 Hz)
  }
  else if (LevelSensorVal <300 && LevelSensorVal >40) {
    Serial.println("WATER LEVEL IS MEDIUM");
     digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(20);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(20);
  }
  else if (LevelSensorVal <40) {
    Serial.println("WATER LEVEL IS FULL");
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    delay(20);
    digitalWrite(12, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    delay(20);
    tone(5, 10, 1000); //play tone 5 (D#0 = 10 Hz)
  }
   delay(10);
}