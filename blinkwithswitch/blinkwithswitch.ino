const int ledPin =12;
const int buttonPin = 2;
int buttonState =0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin,INPUT);

}

// the loop function runs over and over again forever
void loop() {
  buttonState= digitalRead(buttonPin);

  if(buttonState ==HIGH){
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin,LOW);
  }                    // wait for a second
}