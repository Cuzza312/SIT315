// C++ code
//
#define motionPin 2
#define ledPin 13

int val = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(motionPin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  val = digitalRead(motionPin);
  
  if (val == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion Detected");
  }
}