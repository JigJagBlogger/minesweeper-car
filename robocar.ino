/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  digitalWrite(11,HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  float sensorValue = analogRead(A0);
  // print out the value you read:
  if(sensorValue >=500) {
    Serial.println("metal");
    digitalWrite(11, LOW);
    delay(3000);
    digitalWrite(11, HIGH);

  }
  
  delay(3);  // delay in between reads for stability
}
