#include <IdeasparkLCD.h>

// These pins are fixed because the LCD is pre‑attached to the ESP32.
// No wiring needed — just upload and enjoy.
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  4
#define TFT_BLK  32

// Create the IdeasparkLCD object
IdeasparkLCD lcd(TFT_CS, TFT_DC, TFT_RST, TFT_BLK);

void setup() {
    lcd.begin();

    /*
        Welcome to IdeasparkLCD!

        This file (src/main.cpp) is your main program.
        Right now it’s empty — which is perfect.

        To get started quickly:
        -----------------------
        1. Open the "examples" folder
        2. Pick any example you like (01–07)
        3. Open the .ino file inside it
        4. Copy everything
        5. Paste it here, replacing this comment block
        6. Press the Upload button in PlatformIO

        About comments:
        ----------------
        - Lines starting with // are single-line comments.
        - Anything between a block comment start and end
          (the kind used for this big note) is also ignored.

        Comments are just notes to help you learn —
        they don’t affect how your code runs.

        Have fun experimenting!
    */
}

void loop() {
    // Your code will run here after setup().
    // Most examples use loop() to repeat animations.
}