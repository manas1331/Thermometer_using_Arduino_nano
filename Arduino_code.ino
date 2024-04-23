// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



void getTemp(float * t)
{

  const int analogPin = 0; // replace 0 with analog pin
  const float invBeta = 1.00 / 3380.00;   // replace "Beta" with beta of thermistor

  const  float adcMax = 1023.00;
  const float invT0 = 1.00 / 298.15;   // room temp in Kelvin

  int adcVal, i, numSamples = 5;
  float  K, C, F;

  adcVal = 0;
  for (i = 0; i < numSamples; i++)
   {
     adcVal = adcVal + analogRead(analogPin);
     delay(100);
   }
  adcVal = adcVal/5;
  K = 1.00 / (invT0 + invBeta*(log ( adcMax / (float) adcVal - 1.00)));
  C = K - 273.15;                      // convert to Celsius
  F = ((9.0*C)/5.00) + 32.00;   // convert to Fahrenheit
  t[0] = K; t[1] = C; t[2] = F;
  return;
}

void setup()
{
//  analogReference(DEFAULT);
//  Serial.begin(9600);
   // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Temperature is :");
}

void loop()
{
  float temp[3];
  getTemp(temp);

  Serial.print("Temperature is ");
  Serial.print(temp[1]);
  Serial.print(" deg. C ");
  
  delay(2000);
   lcd.setCursor(0, 1);
  // print the number of seconds since reset:

  lcd.print(temp[1]);
  lcd.print(" C");
  return;
}
