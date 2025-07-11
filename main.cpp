#include <raylib.h>

int main()
{
  // Initialization
  const int screenWidth = 1280;
  const int screenHeight = 768;
  const char *windowTitle = "Hello world!";
  const char *message = ".... whatever ...";
  const int fontSize = 40;
  const float msgSpacing = 1.0f;
 
  InitWindow(screenWidth, screenHeight, windowTitle);
 
  // NOTE: The following only works after calling InitWindow() (i.e,. RayLib is initialized)
  const Font font = GetFontDefault();
  const Vector2 msgSize = MeasureTextEx(font, message, fontSize, msgSpacing);
  const Vector2 msgPos = Vector2{(screenWidth - msgSize.x) / 2, (screenHeight - msgSize.y) / 2};
 
  SetTargetFPS(60);
 
  // Main loop
  while(!WindowShouldClose()) {
 
    // Update the display
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawTextEx(font, message, msgPos, fontSize, msgSpacing, RED);
    EndDrawing();
  }
 
  // Cleanup
  CloseWindow();
     
  return 0;
}
