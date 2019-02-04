#include <DS3231.h>
#include<Wire.h>
#include <LiquidCrystal.h> // includes the LiquidCrystal Library 
DS3231   rtc(SDA, SCL);
//clock t;

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 
void setup() { 
  Serial.begin(9600);
  //rtc.setDOW(FRIDAY);
 rtc.begin(); // Initialize the rtc object
 lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display } 
}
void loop() { 
 DateTime now = rtc.now();
 
 lcd.setCursor(0,0);
 lcd.print("Real Time Clock  ");
 lcd.setCursor(0,1);
 lcd.print("Time: ");
 lcd.print(rtc.getTimeStr());
 delay(3000);
 lcd.setCursor(0,1);
 lcd.print("Date: ");
 lcd.print(rtc.getDateStr());
 delay(3000);
 lcd.setCursor(0,1);
 lcd.print("Day: ");
 lcd.print(rtc.getDOWStr());
 lcd.print("                   ");
 delay(3000);
 lcd.setCursor(0,1);
 lcd.print("Temp: ");
 lcd.print(rtc.getTemp());
 lcd.print(" C");
 lcd.print("       ");
 delay(3000);
 
}
String getDayOfWeek(int i)
{
  switch(i)
  {
    case 1: return "Monday";break;
    case 2: return "Tuesday";break;
    case 3: return "Wednesday";break;
    case 4: return "Thursday";break;
    case 5: return "Friday";break;
    case 6: return "Saturday";break;
    case 7: return "Sunday";break;
    default: return "Monday";break;
  }
}
