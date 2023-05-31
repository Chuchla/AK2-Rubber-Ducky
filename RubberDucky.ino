#include <DigiKeyboard.h>


void setup() {
  // put your setup code here, to run once:
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(0,0);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);
    String toWrite = "NoTepad";
    
      for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }

    DigiKeyboard.println(toWrite);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    toWrite = "@echo off\n:loop\nTiTle @Rubber_Ducky\ncolor 03\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite);
    toWrite = "echo %random% %random% %random% %random% %random% %random% %random%\ngoTo loop";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(0, MOD_ALT_LEFT);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_P);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_S);
    DigiKeyboard.delay(100);
    toWrite = "@Rubber_Ducky.baT";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
    DigiKeyboard.delay(1300);
    DigiKeyboard.println("H");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    
    

}    

void loop() {
  // put your main code here, to run repeatedly:
    
}

