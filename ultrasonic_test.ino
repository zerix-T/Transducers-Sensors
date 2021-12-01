
int trig = 5;
int echo = 6;
long duration;
long distance;

void setup() {
  pinMode(trig,OUTPUT);
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

  Serial.println(distance);
}
