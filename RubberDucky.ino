#include <DigiKeyboard.h>


void setup() {
  // put your setup code here, to run once:
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    String toWrite = "notepad\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      if(toWrite.charAt(i) == ' '){
        DigiKeyboard.sendKeyPress(KEY_SPACE);
        continue;
      }
      else if(toWrite.charAt(i) == '\n'){
        DigiKeyboard.sendKeyPress(KEY_ENTER);
        continue;
      }

      else toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.print(toWrite);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyPress(KEY_ENTER);
}    

void loop() {
  // put your main code here, to run repeatedly:
      DigiKeyboard.delay(1000);
      String toWrite = "Hello Digispark!\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      if(toWrite.charAt(i) == ' '){
        DigiKeyboard.sendKeyPress(KEY_SPACE);
        continue;
      }
      else if(toWrite.charAt(i) == '\n'){
        DigiKeyboard.sendKeyPress(KEY_ENTER);
        continue;
      }

      else toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    
    DigiKeyboard.println(toWrite);
}

