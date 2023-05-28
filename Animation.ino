#include <DigiKeyboard.h>


void setup() {
  // put your setup code here, to run once:
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(0,0);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);
    String toWrite = "noTepad";
      for(char i = 0 ; i < toWrite.length(); i++){
      if(toWrite.charAt(i) == ' '){
        DigiKeyboard.sendKeyStroke(KEY_SPACE);
        continue;
      }
      else if(toWrite.charAt(i) == '\n'){
        DigiKeyboard.sendKeyStroke(KEY_ENTER);
        continue;
      }

      else toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }

    DigiKeyboard.println(toWrite);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1500);
    
}    

void loop() {
  // put your main code here, to run repeatedly:
    DigiKeyboard.delay(500);  
      String toWrite = "Losowy TeksT\n";

    for(char i = 0 ; i < toWrite.length(); i++){
      if(toWrite.charAt(i) == '\n'){
        DigiKeyboard.sendKeyStroke(KEY_ENTER);
        continue;
      }

      else toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    
    DigiKeyboard.println(toWrite);
}

