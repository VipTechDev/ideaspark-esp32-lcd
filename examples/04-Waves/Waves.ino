#include <IdeasparkLCD.h>

#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  4
#define TFT_BLK  32

IdeasparkLCD lcd(TFT_CS, TFT_DC, TFT_RST, TFT_BLK);

void setup() {
    lcd.begin();

    /*
        lcd.wave();

        This animation uses sine waves to create a smooth, flowing gradient.
        It's perfect for beginners who want to see how simple maths creates motion.

        ➜ Where to edit the animation:
          Open:  lib/IdeasparkLCD/IdeasparkLCD.cpp
          Then find the function:  void IdeasparkLCD::wave()

        Inside that function you can change:

        - Wave width (how stretched the waves look):
            sin(x * 0.05)
            Try:
              0.02 → wider waves
              0.10 → tighter waves

        - Colour shifting:
            Look for values like +40 or +80
            These shift the colour channels to create different palettes.

        - Wave speed:
            delay(20) → faster movement
            delay(60) → slower movement

        You can’t break anything — experiment freely!
    */

    lcd.wave();   // Runs continuously — no need to put this in loop()
}

void loop() {
    // Nothing needed here — wave() already animates forever
}