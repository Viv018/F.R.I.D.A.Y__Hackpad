# F.R.I.D.A.Y__Hackpad
This is a Macro pad with a 3x3 key pad along with a rotary encoder and a 0.91 QLED screen for my HACKCLUB project
# F.R.I.D.A.Y

A custom 3×3 macropad with a rotary encoder, 0.91" OLED, and per-key SK6812 RGB lighting, built around the Seeeduino XIAO.

I named it F.R.I.D.A.Y because I wanted something that feels like a helpful little assistant sitting on my desk and cause i am a big marvel fan.

### Features
- 9 mechanical switches (3×3 matrix)
- Rotary encoder with push button
- 0.91" 128×32 OLED display
- 8× SK6812MINI-E reverse-mount RGB LEDs
- Seeed XIAO RP2040
- Fully open source

### Photos

**Schematic**
![Schematic](Photo/F.R.I.D.A.Y — Schematic Editor 8_11_2026 8_51_15 AM.png)

**PCB**
![PCB](<img width="1920" height="966" alt="F R I D A Y — PCB Editor 8_10_2026 3_42_48 PM (1)" src="https://github.com/user-attachments/assets/fc30a773-a280-402c-9867-2068fab1f9ea" />
)

**Case**
![Case](Photo/F.R.I.D.A.Y. PAD_ (KALAYUG) - Autodesk Fusion (Trial ends in 24 days)  8_13_2026 5_06_41 PM.png)

### Bill of Materials

| Part                        | Quantity | Notes                          |
|----------------------------|----------|--------------------------------|
| Seeeduino XIAO             | 1        | RP2040 version                 |
| MX-style switches          | 9        | Any MX compatible              |
| SK6812MINI-E               | 8        | Reverse mount                  |
| 1N4148 diodes              | 9        |                                |
| Rotary Encoder (EC11)      | 1        | With push switch               |
| 0.91" OLED                 | 1        | I2C, 128×32                    |
| Keycaps                    | 9        | 1u                             |
| M3 screws + heat-set inserts | 4      | For the case                   |

### Firmware
This project uses **QMK**

The firmware is located in the `/Firmware` folder.

### Case
The case is a simple two-part sandwich design made in Fusion 360.  
STL/STEP files are available in the `/CAD` and `/production` folders.

### Credits
Designed for Hack Club’s Hackpad program by BATMANNN BABYYY

