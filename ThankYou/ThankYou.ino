#include <DigiKeyboard.h>
#define KEY_ARROW_DOWN 0x51
#define KEY_TAB 0x2B
void setup() { 
}


void loop() {
  // Start keyboard
  DigiKeyboard.update();
  DigiKeyboard.delay(2000); // Delay for system startup

  // Open Notepad from Start menu
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Press Win+R
  DigiKeyboard.delay(1000); // Wait for the Run dialog to open
  DigiKeyboard.println("notepad"); // Type "notepad"
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Press Enter
  DigiKeyboard.delay(1000); // Wait for Notepad to open

  DigiKeyboard.sendKeyStroke(KEY_O, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(KEY_ARROW_DOWN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyPress(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyPress(KEY_ARROW_DOWN);
  DigiKeyboard.sendKeyPress(KEY_ARROW_DOWN);
  DigiKeyboard.sendKeyPress(KEY_TAB);
  DigiKeyboard.print("25");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.println(" ________             __");
  DigiKeyboard.println("/_  __/ /  ___ ____  / /__  __ _____  __ __");
  DigiKeyboard.println(" / / / _ \\/ _ `/ _ \\/  '_/ / // / _ \\/ // /");
  DigiKeyboard.println("/_/ /_//_/\\_,_/_//_/_/\\_\\  \\_, /\\___/\\_,_/ ");
  DigiKeyboard.println("                          /___/");


  while (1) {} // Stay in an infinite loop to prevent further execution
}