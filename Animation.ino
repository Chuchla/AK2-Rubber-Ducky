#include <DigiKeyboard.h>


void setup() {
  // put your setup code here, to run once:
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(0,0);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); //Click windows key
    DigiKeyboard.delay(1000);
    String toWrite = "noTepad";
      for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); //Write notepad
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //Open notepad
    DigiKeyboard.delay(200);
    
}    

void loop() {
  // put your main code here, to run repeatedly:
    DigiKeyboard.delay(1000);  
    String toWrite = "Hello World\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); //Write Hello World in a loop
}

