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
        lcd.rectangles();

        This animation draws rectangles that shrink toward the centre.
        Each rectangle is smaller than the last, creating a tunnel effect.

        ➜ Where to edit the animation:
          Open:  lib/IdeasparkLCD/IdeasparkLCD.cpp
          Then find the function:  void IdeasparkLCD::rectangles()

        Inside that function you can change:

        - The colour:
            ST77XX_MAGENTA, ST77XX_GREEN, ST77XX_CYAN, ST77XX_YELLOW…

        - The step size (how many rectangles appear):
            i += 10 → fewer rectangles
            i += 5  → more rectangles

        - The animation speed:
            delay(80) → slower shrinking
            delay(20) → faster shrinking

        This is a great way to learn how width/height change over time.
        You can’t break anything — experiment freely!
    */
}

void loop() {
    // Run one shrinking-rectangle animation
    lcd.rectangles();

    // Pause before the next loop
    // Increase this number for a slower repeating effect
    // Decrease it for a faster repeating effect
    delay(200);
}