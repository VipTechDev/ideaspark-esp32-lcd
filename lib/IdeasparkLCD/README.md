# 📘 IdeasparkLCD Library

## 🚀 Quick Start (Your First Screen in 10 Seconds)

If you want to see something appear on the screen immediately, follow these steps:

1. Open the folder `examples/01‑SimpleText`
2. Open the file `01‑SimpleText.ino`
3. Copy everything inside it
4. Paste it into your project’s `src/main.cpp`
5. Press the **Upload** button in PlatformIO (arrow icon at the bottom)
6. Your Ideaspark screen will show your first text message!

**What you should see:**  
A black background with bright green text saying “Hello Ideaspark!” in the top‑left corner.

This is the fastest way to get started — no wiring, no setup, just upload and enjoy.

---

A friendly starter library for the Ideaspark ESP32 board with a pre‑attached 1.14" ST7789 LCD.

This library is designed to help beginners and hobbyists get graphics on the screen quickly, without needing to wire anything or understand complex display drivers. Everything is already connected on the board — you just upload and enjoy.

---

## 📌 Defining the TFT Screen (No Wiring Required)

Your Ideaspark board already has the LCD soldered to the ESP32.  
These pins are fixed and should not be changed:

````markdown
```cpp
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  4
#define TFT_BLK  32
```
````

These values tell the library which ESP32 pins control:

- CS  = Chip Select
- DC  = Data / Command
- RST = Reset
- BLK = Backlight

---

To create the display object:

````markdown
```cpp
IdeasparkLCD lcd(TFT_CS, TFT_DC, TFT_RST, TFT_BLK);
```
````

---

Then start the screen:

````markdown
```cpp
lcd.begin();
```
````

That’s all you need to get the display running.

---

## 💬 A Note About Comments (They Don’t Affect Your Code)

You’ll see lots of helpful notes inside the example files, like this:

```cpp
/*
    This is a comment.
    It explains what the code does.
    The ESP32 completely ignores it.
*/
```

Comments are **just notes for humans** — they never run on the ESP32 and they never change how your program works.

There are two types of comments:

### **1) Multi‑line comments**
Use `/* ... */`  
Great for longer explanations, tips, and learning notes.

### **2) Single‑line comments**
Use `//`  
Perfect for quick reminders.

```cpp
// This line is ignored too
```

Feel free to read them, delete them, or add your own — they’re there to help you understand what’s happening without affecting your program in any way.

---

## 📂 Using the Examples (Copy → Paste → Upload)

Inside the `examples/` folder you’ll find the following folders, each containing a complete sketch:

- 01‑SimpleText 
- 02‑Shapes 
- 03‑ColorBars 
- 04‑Waves
- 05‑PulsingCircles  
- 06‑ConvergingRectangles
- 07‑DemoAll   

---

To use an example:

1. Open the example folder  
2. Open the `.ino` file  
3. Copy the entire sketch  
4. Paste it into your project’s `src/main.cpp`  
5. Press the **Upload** button in PlatformIO

### ➜ Upload (the arrow pointing right)
Compiles and uploads your code to the ESP32.

Every example includes comments explaining:

- what the code does  
- what each argument means  
- what you can safely change  
- fun things to try  

Perfect for beginners and hobbyists.

---

## 📂 Example Folders (01–07)

To make learning as smooth as possible, the examples are arranged in a numbered sequence.

Start with **01** and work your way up — each sketch introduces one new idea at a time.

- **01‑SimpleText** – draw text on the screen  
- **02‑Shapes** – rectangles, circles, lines, triangles  
- **03‑ColorBars** – smooth colour gradient  
- **04‑Waves** – flowing sine‑wave animation  
- **05‑PulsingCircles** – expanding rings from the centre  
- **06‑ConvergingRectangles** – shrinking rectangles forming a tunnel effect  
- **07‑DemoAll** – runs every demo in sequence  

---

## 🛠️ PlatformIO Buttons (Bottom Toolbar)

PlatformIO shows three important buttons at the bottom of VS Code:

### ✔ Build (the tick ✓)
Checks your code for errors without uploading anything.

### ➜ Upload (the arrow pointing right)
Compiles and uploads your code to the ESP32.

### 🗑 Clean (the trashcan)
Clears old build files — useful if PlatformIO acts strange.

---

## ⚠️ Boot Pins & Flash Pins (Important for ESP32 Users)

The ESP32 has certain pins that must not be pulled high or low during boot.  
If they are, the board may:

- refuse to upload  
- get stuck in bootloader mode  
- endlessly reset  

Your Ideaspark board avoids these issues by using safe pins for the LCD, but beginners should still be aware.

A full list of unsafe pins is included in the main project README.

---

## 🔧 Reset Options (If the Board Gets Stuck)

If the ESP32 stops responding:

### 1. Press the RESET button  
Restarts the board normally.

### 2. Enter manual upload mode  
Hold **BOOT**, tap **RESET**, release **BOOT**.

### 3. Use PlatformIO “Clean”  
Then try uploading again.

### 4. Unplug and re‑plug USB  
Often fixes stubborn issues.

---

## 🎉 Have Fun and Experiment!

This library is designed to be beginner‑friendly and hackable.  
Open the examples, tweak colours, change numbers, break things, fix them — that’s how you learn.

If you create something cool, feel free to share it with the community!
