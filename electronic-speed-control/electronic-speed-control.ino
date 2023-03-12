const byte potPin = A0;
const byte ESCPin = 9;

unsigned int potVal; // stores the voltage read from the potentiometer
byte ESCVal;  // stores the duty cycle to be output on the ESCPin

void setup() {
  Serial.begin(9600);
  
  pinMode(ESCPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);

  ESCVal = (1023-potVal) >> 2;
  analogWrite(ESCPin, ESCVal);
  Serial.println(ESCVal);
}
