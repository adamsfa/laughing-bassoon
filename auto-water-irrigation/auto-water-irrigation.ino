int IN1 = 5;

int pin1 = A0;

float sensor1Value = 0;

void setup(){
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(pin1, INPUT);
  digitalWrite(IN1, HIGH);

  delay(500);
}

void loop(){
  Serial.print("Plant 1 - Moisture Level: ");
  sensor1Value = analogRead(pin1);
  Serial.println(sensor1Value);

  if(sensor1Value > 450){
    digitalWrite(IN1, HIGH);
  } else {
    digitalWrite(IN1, LOW);
  }
}
