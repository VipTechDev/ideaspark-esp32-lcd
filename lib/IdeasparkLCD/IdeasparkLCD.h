#pragma once
#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

class IdeasparkLCD {
public:
    IdeasparkLCD(uint8_t cs, uint8_t dc, uint8_t rst, uint8_t blk);

    void begin();
    void setBacklight(bool on);

    // Simple helpers
    void fill(uint16_t color);
    void text(int16_t x, int16_t y, const char* msg, uint8_t size, uint16_t color);

    // Demo animations for beginners
    void colorBars();
    void wave();
    void circles();
    void rectangles();

    // Expose raw TFT for advanced use
    Adafruit_ST7789& raw();

private:
    uint8_t _cs, _dc, _rst, _blk;
    Adafruit_ST7789 tft;
};