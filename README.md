# Ideaspark ESP32 1.14" LCD Development Board
*A VipTechDev‑curated module for makers, tinkerers, and product builders.*

The Ideaspark ESP32 LCD board is a compact, powerful development module featuring an ESP32 microcontroller and a bright 1.14" ST7789 display. This repository provides everything you need to get started: setup instructions, example code, animations, and a friendly quick‑start guide.

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
- **Quick Start Guide** (friendly setup walkthrough)  
- **Example sketches**  
  - Hello World  
  - Display test  
  - VipTechDev boot animation  
- **Pinout reference**  
- **Links to drivers and libraries**  

---

## 🛠️ Getting Started
If you’re new to the board, start with the Quick Start Guide:

👉 **`/docs/QuickStart.md`**

It covers:
- Installing the CH340 driver  
- Adding ESP32 support to Arduino IDE  
- Installing the ST7789 display libraries  
- Configuring board settings  
- Running your first sketch  

---

## 🔌 Pinout Overview

| Function     | ESP32 Pin |
|--------------|-----------|
| LCD MOSI     | 23        |
| LCD SCLK     | 18        |
| LCD CS       | 15        |
| LCD DC       | 2         |
| LCD RST      | 4         |
| LCD Backlight| 32        |

---

## 🧪 Example: Hello VipTechDev

```cpp
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
  lcd.init(135, 240);
  lcd.fillScreen(ST77XX_BLACK);
}

void loop() {
  lcd.setTextSize(3);
  lcd.print("Hello, VipTechDev!");
  delay(100000);
}
```

More examples are available in the `/examples` folder.

---

## 🎨 VipTechDev Boot Animation
This repo includes a polished boot animation used for product testing and customer‑facing demos.  
You’ll find it in:

👉 **`/examples/BootAnimation/`**

---

## 🧰 Required Libraries
Install these through Arduino Library Manager:

- **Adafruit ST7735 and ST7789 Library**  
- **Adafruit GFX Library**  
- **Adafruit seesaw Library** (dependency)

---

## 💻 Board Settings (Arduino IDE)

| Setting                     | Value                                   |
|-----------------------------|-------------------------------------------|
| Board                       | ESP32 Dev Module                         |
| Upload Speed                | 240000                                   |
| CPU Frequency               | 240MHz (WiFi/BT)                         |
| Flash Frequency             | 80MHz                                    |
| Flash Mode                  | QIO                                      |
| Flash Size                  | 4MB (32Mb)                               |
| Partition Scheme            | Default 4MB with spiffs                  |
| PSRAM                       | Disabled                                 |
| Core Debug Level            | None                                     |
| Programmer                  | Default                                  |
| Erase Flash Before Upload   | Disabled                                 |
| Flash Encryption            | Disabled                                 |

---

## 🧩 Troubleshooting

### Screen shows random static on power‑up  
This is normal before initialization. The examples include backlight‑control code to hide it.

### Board not detected  
Install the CH340 driver.

### Display stays white  
Check wiring and ensure the correct pins are defined.

---

## 🏷️ License
MIT License — feel free to build on this, modify it, and use it in your own projects.

---

## 📬 Support
For help, ideas, or collaboration:

**support@viptechdev.com**
