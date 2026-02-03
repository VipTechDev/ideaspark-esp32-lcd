# Ideaspark ESP32 1.14" LCD Development Board  
*A VipTechDev‑curated module for makers, tinkerers, and product builders.*

The Ideaspark ESP32 LCD board is a compact, powerful development module featuring an ESP32 microcontroller and a bright 1.14" ST7789 display. This repository provides everything you need to get started using **Visual Studio Code + PlatformIO**, including setup instructions, example projects, animations, and a friendly quick‑start guide.

---

## ⭐ Features
- ESP32 dual‑core microcontroller  
- 1.14" 240×135 ST7789 IPS LCD  
- USB‑C or Micro‑USB (depending on batch)  
- CH340 USB‑serial interface  
- On‑board backlight control pin  
- Breadboard‑friendly layout  
- Fully tested in the UK by VipTechDev  

---

## 📦 What’s in this Repository
- **Quick Start Guide** (PlatformIO‑focused setup)  
- **Example PlatformIO projects**  
  - Hello World  
  - Display test  
  - VipTechDev boot animation  
- **Pinout reference**  
- **Links to drivers and libraries**  

---

## 🛠️ Getting Started with PlatformIO

### 1. Install Visual Studio Code  
Download from: https://code.visualstudio.com/

### 2. Install PlatformIO Extension  
In VS Code:  
**Extensions → Search “PlatformIO IDE” → Install**

### 3. Install CH340 Driver  
Your computer needs this to talk to the board.  
Search for: `CH340 driver`  
Install the version for your OS.

### 4. Create a New PlatformIO Project  
- Click the **PlatformIO Home** icon  
- Choose **New Project**  
- Name: `ideaspark-esp32-lcd`  
- Board: **ESP32 Dev Module**  
- Framework: **Arduino**  
- Finish

PlatformIO will generate a full project structure for you.

---

## 📚 Add Required Libraries

Open `platformio.ini` and add:

```ini
lib_deps =
    adafruit/Adafruit ST7735 and ST7789 Library
    adafruit/Adafruit GFX Library
```

PlatformIO will automatically install dependencies like Adafruit seesaw.

---

## 🔌 Pinout Overview

| Function      | ESP32 Pin |
|---------------|-----------|
| LCD MOSI      | 23        |
| LCD SCLK      | 18        |
| LCD CS        | 15        |
| LCD DC        | 2         |
| LCD RST       | 4         |
| LCD Backlight | 32        |

---

## 🧪 Example: Hello VipTechDev

Create a file at:  
`src/main.cpp`

```cpp
#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

#define LCD_MOSI 23
#define LCD_SCLK 18
#define LCD_CS   15
#define LCD_DC   2
#define LCD_RST  4
#define LCD_BLK  32

Adafruit_ST7789 lcd = Adafruit_ST7789(LCD_CS, LCD_DC, LCD_RST);

void setup() {
    pinMode(LCD_BLK, OUTPUT);
    digitalWrite(LCD_BLK, HIGH); // turn on backlight

    lcd.init(135, 240);
    lcd.fillScreen(ST77XX_BLACK);
}

void loop() {
    lcd.setTextSize(3);
    lcd.setCursor(10, 10);
    lcd.print("Hello, VipTechDev!");
    delay(100000);
}
```

---

## 🎨 VipTechDev Boot Animation
A polished boot animation used for product testing and customer demos is included in:

👉 **`/examples/BootAnimation/`**

---

## 🧰 PlatformIO Build & Upload

### Build:
```
PlatformIO: Build (checkmark icon)
```

### Upload:
```
PlatformIO: Upload (right‑arrow icon)
```

### Serial Monitor:
```
PlatformIO: Monitor (plug icon)
```

---

## 🧩 Troubleshooting

### Screen shows random static on power‑up  
This is normal before initialization. The examples include backlight‑control code to hide it.

### Board not detected  
Install the CH340 driver.

### Display stays white  
Check wiring and ensure the correct pins are defined.

### Upload errors  
Try lowering upload speed in `platformio.ini`:
```ini
upload_speed = 115200
```

---

## 🏷️ License
MIT License — feel free to build on this, modify it, and use it in your own projects.

---

## 📬 Support
If you need help, want to report an issue, or have ideas to improve the project, please open an issue on the GitHub repository.
