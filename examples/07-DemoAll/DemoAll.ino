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
        Demo All
        --------
        This example runs every built‑in Ideaspark demo animation
        one after another. It’s the easiest way to explore what the
        screen can do.

        ➜ Where to customise the demos:
          Open:  lib/IdeasparkLCD/IdeasparkLCD.cpp
          Each demo is its own function:
              • colorBars()
              • wave()
              • circles()
              • rectangles()
              • text() and raw() graphics

        You can change:
        - The delay between demos (the pause after each one)
        - The order of the demos
        - Remove demos you don’t want
        - Add your own animations below

        This file is a great place to experiment with sequencing.
    */

    // 1) Colour bars
    lcd.colorBars();
    delay(1500);

    // 2) Smooth wave gradient
    lcd.wave();
    delay(1500);

    // 3) Pulsing circles
    lcd.circles();
    delay(1500);

    // 4) Converging rectangles
    lcd.rectangles();
    delay(1500);

    // 5) Simple text demo
    lcd.fill(ST77XX_BLACK);
    lcd.text(10, 20, "Hello Ideaspark!", 2, ST77XX_GREEN);
    lcd.text(10, 60, "Demo All", 2, ST77XX_CYAN);
    delay(1500);

    // 6) Shapes demo (using raw graphics)
    lcd.fill(ST77XX_BLACK);
    lcd.raw().drawRect(10, 10, 80, 50, ST77XX_RED);
    lcd.raw().fillCircle(150, 40, 20, ST77XX_BLUE);
    lcd.raw().drawLine(0, lcd.raw().height() - 1, lcd.raw().width(), 0, ST77XX_YELLOW);
    lcd.raw().drawTriangle(60, 60, 20, 120, 100, 120, ST77XX_GREEN);
    delay(1500);
}

void loop() {
    // Nothing here — the demos run once on startup.
}