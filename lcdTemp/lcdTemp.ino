// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

LiquidCrystal lcd(7,9,10,11,12,13);
//declear the varbles
 float tempc,tempf;
int tempPin=A0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Print a message to the LCD.
  lcd.print("temp1=");
  lcd.setCursor(0, 1);
  lcd.print("temp2=");
  
}

void loop() {
  tempc=analogRead(tempPin);//read the value from the sensor
 tempc=(5.0*tempc*100.0)/1024.0;//read to analog data to temparture
  tempf=((tempc*9)/5)+32;//covert to celcius to farehinite
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(6, 0);
  // print the temp
  lcd.print(tempc,1);
  lcd.print("'C");
  
   lcd.setCursor(6, 1);
  // print the temp
  lcd.print(tempf,1);
  lcd.print("'F");

  //sleep
  delay(1000);
  
}
