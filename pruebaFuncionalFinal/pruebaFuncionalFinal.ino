
#include <LiquidCrystal.h>
char input;
const int rs = 13,rw =12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs,rw, en, d4, d5, d6, d7);
void setup() {                
  // initialize the digital pins as an output.

// Turn the Serial Protocol ON
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  char byteRead[4];
  char byteRead1[3];

   /*  check if data has been sent from the computer: */
  if (Serial.available()) {
  
    /* read the most recent byte */
     Serial.readBytes(byteRead,4);
    //You have to subtract '0' from the read Byte to convert from text to a number.
  
    /* lcd.setCursor(0,0);
     lcd.print(byteRead);
     delay(1000);
     lcd.clear();
    for(int i=1;i<2;i++){
      byteRead1[i-1]=byteRead[i];
    }
    */
   
    if(byteRead[1]=='0' && byteRead[2]=='0' && byteRead[3]=='0'){
    lcd.setCursor(0,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='1' && byteRead[3]=='0'){
    lcd.setCursor(1,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='2' && byteRead[3]=='0'){
    lcd.setCursor(2,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='3' && byteRead[3]=='0'){
    lcd.setCursor(3,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='4' && byteRead[3]=='0'){
    lcd.setCursor(4,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='5' && byteRead[3]=='0'){
    lcd.setCursor(5,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='6' && byteRead[3]=='0'){
    lcd.setCursor(6,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='7' && byteRead[3]=='0'){
    lcd.setCursor(7,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='8' && byteRead[3]=='0'){
    lcd.setCursor(8,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='9' && byteRead[3]=='0'){
    lcd.setCursor(9,0);
    }

    if(byteRead[1]=='1' && byteRead[2]=='0' && byteRead[3]=='0'){
    lcd.setCursor(10,0);
    }

    if(byteRead[1]=='1' && byteRead[2]=='1' && byteRead[3]=='0'){
    lcd.setCursor(11,0);
    }

    if(byteRead[1]=='1' && byteRead[2]=='2' && byteRead[3]=='0'){
    lcd.setCursor(12,0);
    }

    if(byteRead[1]=='1' && byteRead[2]=='3' && byteRead[3]=='0'){
    lcd.setCursor(13,0);
    }

    if(byteRead[1]=='1' && byteRead[2]=='4' && byteRead[3]=='0'){
    lcd.setCursor(14,0);
    }
    if(byteRead[1]=='1' && byteRead[2]=='5' && byteRead[3]=='0'){
    lcd.setCursor(15,0);
    }

    
     if(byteRead[1]=='0' && byteRead[2]=='0' && byteRead[3]=='1'){
    lcd.setCursor(0,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='1' && byteRead[3]=='1'){
    lcd.setCursor(1,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='2' && byteRead[3]=='1'){
    lcd.setCursor(2,0);
    }
    if(byteRead[1]=='0' && byteRead[2]=='3' && byteRead[3]=='1'){
    lcd.setCursor(3,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='4' && byteRead[3]=='1'){
    lcd.setCursor(4,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='5' && byteRead[3]=='1'){
    lcd.setCursor(5,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='6' && byteRead[3]=='1'){
    lcd.setCursor(6,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='7' && byteRead[3]=='1'){
    lcd.setCursor(7,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='8' && byteRead[3]=='1'){
    lcd.setCursor(8,1);
    }
    if(byteRead[1]=='0' && byteRead[2]=='9' && byteRead[3]=='1'){
    lcd.setCursor(9,1);
    }

    if(byteRead[1]=='1' && byteRead[2]=='0' && byteRead[3]=='1'){
    lcd.setCursor(10,1);
    }

    if(byteRead[1]=='1' && byteRead[2]=='1' && byteRead[3]=='1'){
    lcd.setCursor(11,1);
    }

    if(byteRead[1]=='1' && byteRead[2]=='2' && byteRead[3]=='1'){
    lcd.setCursor(12,1);
    }

    if(byteRead[1]=='1' && byteRead[2]=='3' && byteRead[3]=='1'){
    lcd.setCursor(13,1);
    }

    if(byteRead[1]=='1' && byteRead[2]=='4' && byteRead[3]=='1'){
    lcd.setCursor(14,1);
    }
    if(byteRead[1]=='1' && byteRead[2]=='5' && byteRead[3]=='1'){
    lcd.setCursor(15,1);
    }
    
   
    lcd.print(byteRead[0]);
    delay(500);
 
    
    }   
}
