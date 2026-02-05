#include <IdeasparkLCD.h>

// These pins are fixed because the LCD is pre‑attached to the ESP32.
// No wiring needed — just upload and enjoy.
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  4
#define TFT_BLK  32

IdeasparkLCD lcd(TFT_CS, TFT_DC, TFT_RST, TFT_BLK);

void setup() {
    lcd.begin();

    /*
        lcd.colorBars();

        This draws a smooth colour gradient across the screen using vertical lines.
        It's a great first animation because it's simple and very easy to customise.

        ➜ Where to edit the animation:
          Open:  lib/IdeasparkLCD/IdeasparkLCD.cpp
          Then find the function:  void IdeasparkLCD::colorBars()

        Inside that function you can change:

        - The colour formula:
            r = map(x, 0, width, 0, 255);
            g = map(x, 0, width, 255, 0);
            b = 128;

          Try:
            • Making blue change too (map it like r and g)
            • Swapping red/green channels
            • Setting one channel to a fixed value

        - Add a delay to slow down the drawing:
            delay(1);   // draws the gradient slowly, line by line

        This is a perfect place to experiment — you can’t break anything!
    */

    lcd.colorBars();   // Draws the gradient once
}

void loop() {
    // Nothing needed here — colorBars() is not an animation
}