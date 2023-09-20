const int potPin = A0; // Analog input pin for the potentiometer

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(potPin); // Read the analog value from the potentiometer
  float voltage = sensorValue * (5.0 / 1023.0); // Convert analog value to voltage (assuming 5V reference)
  
//  Serial.print("Sensor Value: ");
//  Serial.print(sensorValue);
//  Serial.print(", Voltage: ");
  Serial.println(sensorValue); // Print voltage with two decimal places
//  Serial.println("V");
  
  delay(1000); // Add a small delay to avoid rapid serial output
}
