# 📘Arduino Examples (Optional)

These examples are provided for users who prefer the Arduino IDE. They mirror the PlatformIO examples in the main repository, rewritten using the standard Adafruit GFX and Adafruit ST7789 libraries.

---

## ✔Who these examples are for:

- Beginners who want simple copy‑and‑paste sketches
- Users already familiar with the Arduino IDE
- Anyone testing the Ideaspark ESP32 LCD board quickly

---

## ✔Recommended environment: While Arduino IDE works fine, the recommended workflow is PlatformIO, which offers cleaner project structure, automatic library management, easier example organisation, and better scalability for real projects. If you're new to development, consider trying PlatformIO after experimenting here.

---

## 📂Included Arduino examples:

- 01‑SimpleText — basic text drawing
- 02‑Shapes — rectangles, circles, lines, triangles

---

## 📌Required Arduino libraries: 

Install these from Sketch → Include Library → Manage Libraries. Search and install:

- Adafruit GFX Library
- Adafruit ST7735 and ST7789 Library

## 🔧Board selection: Use the standard ESP32 board package: Tools → Board → ESP32 Dev Module

---

## Notes: 

The display pins are fixed on the Ideaspark board: 

| Function  | Pin |
|-----------|-----|
| CS        | 15  |
| DC        | 2   |
| RST       | 4   |
| Backlight | 32  |

No wiring is required — the LCD is pre‑attached.
