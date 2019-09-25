/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/

// the setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int sensorValue = analogRead(A0);
  /*
  //Just Value
  Serial.print("AA08,Present Value(0~1023): ");
  Serial.println(sensorValue);

  /*
   // Resistance
   
   // float resistance = sensorValue*(10.0/1023.0);
   // Serial.println(resistance);
    
  Serial.print("AA08,Present R(0~10.0): ");
  Serial.println(sensorValue*(10.0/1023.0));
  */
  
  
   //Voltage

   // float voltage = sensorValue*(5.0/1023.0);
   // Serial.println(voltage);
  Serial.print("AA08,Present V (0~5.0): ");
  Serial.println(sensorValue*(5.0/1023.0));
  
  delay(500);

}
