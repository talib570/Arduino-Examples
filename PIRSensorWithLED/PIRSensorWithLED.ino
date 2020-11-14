int Buzzer = 13; // Buzzer pin
int sensor = 5; // Sensor oin
int state = LOW;
int val = 0;
void setup() {
  pinMode(Buzzer, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}
void loop(){
  val = digitalRead(sensor);
  if (val == HIGH) {
    digitalWrite(Buzzer, HIGH);
    delay(100);
    if (state == LOW) {
      Serial.println("ACTION REQUARED MOTION DETECTED");
      state = HIGH;
    }
  }
  else {
    digitalWrite(Buzzer, LOW);
    delay(20);
    if (state == HIGH){
      Serial.println("NO ACTION REQUARED");
      state = LOW;
    }
  }
}
