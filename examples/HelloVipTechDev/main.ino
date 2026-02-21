#include <IdeasparkLCD.h>

#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  4
#define TFT_BLK  32

IdeasparkLCD lcd(TFT_CS, TFT_DC, TFT_RST, TFT_BLK);

void setup() {
    lcd.begin();

    lcd.fill(ST77XX_BLACK);

    // Draw a title
    lcd.text(10, 20, "Hello VipTechDev!", 2, ST77XX_GREEN);

void loop() {}
