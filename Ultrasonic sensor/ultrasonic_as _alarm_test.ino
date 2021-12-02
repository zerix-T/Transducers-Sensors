
int trig = 7;
int echo = 8;
long duration;
long distance;
int buzz = 9;
int led = 2;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(buzz,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  Serial.println('Lets see how ultrasonic transducer can be used');

}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);

  distance = duration/58.82;

  if (distance <= 10){
   Serial.println("The object is in red zone !!!");
   tone(buzz,1000);
   digitalWrite(led,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   noTone(buzz);
  }
  else{
    Serial.println("The object is in safe zone :) ");
  }
}
