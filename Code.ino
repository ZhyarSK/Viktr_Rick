
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

void loop() {} // Unused
