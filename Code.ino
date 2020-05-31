
// None
void main()
{
  Keyboard.begin(); // Start Keyboard
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI); 
  Keyboard.press(114); 
  Keyboard.press(KEY_RETURN); 
  Keyboard.releaseAll(); 
  delay(1000); 
  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ"); // link
  Keyboard.press(KEY_RETURN); 
  Keyboard.end();
}

void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("example.com"); // link regsion
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("Get Request"); // FTP - SSH You want :D
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
  
void loop() {} // unnnnnsed zzzhh
