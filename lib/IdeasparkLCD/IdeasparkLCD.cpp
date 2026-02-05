#include "IdeasparkLCD.h"
#include <math.h>   // for sin()


IdeasparkLCD::IdeasparkLCD(uint8_t cs, uint8_t dc, uint8_t rst, uint8_t blk)
: _cs(cs), _dc(dc), _rst(rst), _blk(blk), tft(cs, dc, rst)
{}

void IdeasparkLCD::begin() {
    pinMode(_blk, OUTPUT);
    digitalWrite(_blk, LOW);   // keep screen dark during init

    tft.init(135, 240);
    tft.setRotation(3);
    tft.fillScreen(ST77XX_BLACK);

    digitalWrite(_blk, HIGH);  // turn on backlight
}

/* ------------------------------------------------------------
   Simple Colour Sweep
   ------------------------------------------------------------
   This draws vertical bars across the screen.
   Try changing the colours or the speed!
------------------------------------------------------------ */
void IdeasparkLCD::colorBars() {
    for (int x = 0; x < tft.width(); x++) {
        uint8_t r = map(x, 0, tft.width(), 0, 255);
        uint8_t g = map(x, 0, tft.width(), 255, 0);
        uint8_t b = 128; // fixed blue component

        uint16_t color = tft.color565(r, g, b);
        tft.drawFastVLine(x, 0, tft.height(), color);
    }
}

/* ------------------------------------------------------------
   Smooth Wave Pattern
   ------------------------------------------------------------
   Uses sine waves to create a colourful gradient.
   Try adjusting the 0.05 value for tighter or wider waves.
------------------------------------------------------------ */
void IdeasparkLCD::wave() {
    for (int x = 0; x < tft.width(); x++) {
        uint8_t r = (sin(x * 0.05) * 127) + 128;
        uint8_t g = (sin((x + 40) * 0.05) * 127) + 128;
        uint8_t b = (sin((x + 80) * 0.05) * 127) + 128;

        uint16_t color = tft.color565(r, g, b);
        tft.drawFastVLine(x, 0, tft.height(), color);
    }
}

/* ------------------------------------------------------------
   Pulsing Circles
   ------------------------------------------------------------
   Great for beginners to learn shapes.
   Try changing ST77XX_CYAN to another colour.
------------------------------------------------------------ */
void IdeasparkLCD::circles() {
    tft.fillScreen(ST77XX_BLACK);

    for (int r = 10; r < 120; r += 10) {
        tft.drawCircle(tft.width()/2, tft.height()/2, r, ST77XX_CYAN);
        delay(60); // try 20 for faster animation
    }
}

/* ------------------------------------------------------------
   Converging Rectangles
   ------------------------------------------------------------
   Simple geometric animation.
   Try changing the step size from 10 to 5.
------------------------------------------------------------ */
void IdeasparkLCD::rectangles() {
    tft.fillScreen(ST77XX_BLACK);

    for (int i = 0; i < 6; i++) {
        tft.drawRect(
            10 + i*10,
            10 + i*10,
            tft.width() - (20 + i*20),
            tft.height() - (20 + i*20),
            ST77XX_MAGENTA
        );
        delay(80);
    }
}

/* ------------------------------------------------------------
   Fill the entire screen with a colour
------------------------------------------------------------ */
void IdeasparkLCD::fill(uint16_t color) {
    tft.fillScreen(color);
}

/* ------------------------------------------------------------
   Draw text at a position with size and colour
------------------------------------------------------------ */
void IdeasparkLCD::text(int16_t x, int16_t y, const char* msg, uint8_t size, uint16_t color) {
    tft.setCursor(x, y);
    tft.setTextSize(size);
    tft.setTextColor(color);
    tft.print(msg);
}

Adafruit_ST7789& IdeasparkLCD::raw() {
    return tft;
}