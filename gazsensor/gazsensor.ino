int buzzer = 9;
int sensorPin = A0;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int deger = analogRead(sensorPin);
  Serial.println(deger);

  if(deger > 500){   
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW); 
  }

  delay(500);
}