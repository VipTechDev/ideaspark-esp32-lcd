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
        lcd.circles();

        This animation draws expanding circles from the centre of the screen.
        Each circle is slightly bigger than the last, creating a pulsing effect.

        Want to experiment?

        ➜ Where to edit the animation:
          Open:  lib/IdeasparkLCD/IdeasparkLCD.cpp
          Then find the function:  void IdeasparkLCD::circles()

        Inside that function you can change:

        - The colour:
            ST77XX_RED, ST77XX_BLUE, ST77XX_YELLOW, ST77XX_WHITE…

        - The speed of the expanding circles:
            delay(60) → slower
            delay(20) → faster

        - The step size (how many circles appear):
            r += 10 → fewer circles
            r += 5  → more circles

        You can’t break anything — play around!
    */
}

void loop() {
    // Run one pulse animation (expanding circles)
    lcd.circles();

    // Pause before the next pulse
    // Increase this number for a slower pulse
    // Decrease it for a faster pulse
    delay(200);
}