/*
  # This Sample code is for testing the UV Sensor .
  #Connection:
    VCC-5V
    GND-GND
    OUT-Analog pin 0
*/

int uvIndexValue [13] = { 50, 227, 318, 408, 503, 606, 696, 795, 881, 976, 1079, 1170, 3000};
int uvIndex;

void setup()
{
    Serial.begin(9600);// open serial port, set the baud rate to 9600 bps
}

void loop()
{
  uint16_t uv = analogRead(0);// Get UV value
  
  for (int i = 0; i < 14; i++)
  {
    if (uv <= uvIndexValue[i]) 
    {
      uvIndex = i;
      break;
    }
}

  Serial.print("sensor value :");
  Serial.print(uv);
  Serial.print(" UV Index : ");
  Serial.println(uvIndex);
  
  delay(200);
}
