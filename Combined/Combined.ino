// Orientation: Arrow Centered and pointing away from you
// Wires from left to right: Power, Signal, Ground

int sensorValue = 0;
int adjustedValue = 0; 
int angle = 0;

boolean trigger = false; 

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {

// Turning Mechanism
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
//  Serial.println(sensorValue);

  // Mapping from raw sensor values to angles
  adjustedValue = -0.2635*sensorValue + 135;
//  Serial.println(adjustedValue);

  // Eliminating extra potentiometer range past 180 degrees of motion
  if (adjustedValue < -90){
    angle = -90; 
  }
  else if (adjustedValue > 90) {
    angle = 90; 
  }
  else {
    angle = adjustedValue; 
  }

//Firing Mechanism
  // read the input on analog pin 0:  
  int sensorValueX = analogRead(A1);
  if (sensorValueX > 550){
    trigger = true; 
    Serial.print("f ");
    Serial.println(trigger);
    delay(100);
  }
  else {
    trigger = false; 
    Serial.print("f ");
    Serial.println(trigger);

  }
  
//  Serial.print("f ");
//  Serial.println(trigger); 
  Serial.print("p ");
  Serial.println(angle);
  delay(95);

  
}
