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
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Open notepad
    DigiKeyboard.delay(1000);
    toWrite = "@echo off\n:loop\nTiTle @Rubber_Ducky\ncolor 03\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); // Write first part of script
    toWrite = "echo %random% %random% %random% %random%";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); // Write second part of script

    toWrite = "%random% %random% %random%\ngoTo loop\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); // Write final part of script

    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(0, MOD_ALT_LEFT); // Press alt to choose between options in notepad
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_P); // Open file menu by pressing P
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_S); // Choose save file by pressing S
    DigiKeyboard.delay(100);
    toWrite = "@Rubber_Ducky.baT";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); // Write the name of the file
    DigiKeyboard.sendKeyStroke(KEY_L, MOD_CONTROL_LEFT); // CTRL + L to write target file path
    toWrite = "C:\\Users\\%USERNAME%\\DeskTop\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); // Write target file path - in this case destkop
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Save the file
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // Close notepad - ALT + F4
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT); // Show destkop - Windows + D
    DigiKeyboard.delay(1300);
    DigiKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT); // Write @ - SHIFT + 2
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Open batch file
}    

void loop() {
  // put your main code here, to run repeatedly:
    
}

