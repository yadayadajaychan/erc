int potPin = A0;
int ESCPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(ESCPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potVal = analogRead(potPin);

  int ESCVal = (255.0/1023.0) * (1023-potVal);
  analogWrite(ESCPin, ESCVal);
  Serial.println(ESCVal);
}
