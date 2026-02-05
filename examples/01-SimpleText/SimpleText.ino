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
        This example shows how to draw text on the screen.

        The text() function works like this:
            lcd.text(x, y, "Your message", size, colour);

        - x, y:     Position on the screen (in pixels)
        - size:     1 = small, 2 = medium, 3 = large
        - colour:   Any ST77XX_ colour constant

        Try experimenting:
        - Change the message
        - Try different sizes (1–4)
        - Try different colours (ST77XX_RED, ST77XX_YELLOW, ST77XX_WHITE…)
        - Move the text around by changing x/y
    */

    // Clear the screen to black
    lcd.fill(ST77XX_BLACK);

    // Draw a title
    lcd.text(10, 20, "Hello Ideaspark!", 2, ST77XX_GREEN);

    // A second line for beginners to edit
    lcd.text(10, 60, "Edit me!", 2, ST77XX_CYAN);

    /*
        Want a challenge?

        Try adding more lines:
            lcd.text(10, 100, "Your name here", 2, ST77XX_MAGENTA);

        Try mixing sizes:
            lcd.text(10, 140, "BIG!", 4, ST77XX_RED);

        Try making a rainbow:
            - Change the colour each time
            - Or use a loop to generate colours
    */
}

void loop() {}