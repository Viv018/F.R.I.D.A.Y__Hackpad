# F.R.I.D.A.Y__Hackpad
This is a Macro pad with a 3x3 key pad along with a rotary encoder and a 0.91 QLED screen for my HACKCLUB project
# F.R.I.D.A.Y

A custom 3×3 macropad with a rotary encoder, 0.91" OLED, and per-key SK6812 RGB lighting, built around the Seeeduino XIAO.

I named it F.R.I.D.A.Y because I wanted something that feels like a helpful little assistant sitting on my desk.

### Features
- 9 mechanical switches (3×3 matrix)
- Rotary encoder with push button
- 0.91" 128×32 OLED display
- 8× SK6812MINI-E reverse-mount RGB LEDs
- Seeeduino XIAO (SAMD21)
- Fully open source

### Photos

**Overall Design**
![F.R.I.D.A.Y Render](images/overall.png)

**Schematic**
![Schematic](images/schematic.png)

**PCB**
![PCB](friday-pcb-editor-2026-08-10.png)

**Case**
![Case](images/case.png)

### Bill of Materials

| Part                        | Quantity | Notes                          |
|----------------------------|----------|--------------------------------|
| Seeeduino XIAO             | 1        | SAMD21 version                 |
| MX-style switches          | 9        | Any MX compatible              |
| SK6812MINI-E               | 8        | Reverse mount                  |
| 1N4148 diodes              | 9        |                                |
| Rotary Encoder (EC11)      | 1        | With push switch               |
| 0.91" OLED (SSD1306)       | 1        | I2C, 128×32                    |
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

