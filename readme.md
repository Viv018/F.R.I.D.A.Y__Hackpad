# F.R.I.D.A.Y.

This is my custom macropad, F.R.I.D.A.Y. I designed the schematic and PCB
myself in KiCad and wrote the firmware on top of QMK. It's a 3x3 key
matrix (9 keys total, one of them being the rotary encoder's own push
switch), plus the encoder for rotation input, a small OLED screen, and
RGB lighting.

## What's on it

- Seeed XIAO RP2040 as the brains
- 3x3 switch matrix (9 keys), with SW10 (the encoder's push button)
  built into the matrix as one of the 9
- A rotary encoder for scrolling / volume / media control
- A 0.91" OLED (128x32) that shows which layer is active
- 8x SK6812 addressable RGB LEDs

## Pin mapping

I worked this out straight from my schematic:

| Net                | XIAO pin | RP2040 GPIO |
|---------------------|----------|-------------|
| Row 0               | D0       | GP26        |
| Row 1               | D1       | GP27        |
| Row 2               | D2       | GP28        |
| Col 0               | D3       | GP29        |
| SDA (OLED)          | D4       | GP6         |
| SCL (OLED)          | D5       | GP7         |
| PIN7 -> DIN (LEDs)  | D6       | GP0         |
| Col 1               | D7       | GP1         |
| Col 2               | D8       | GP2         |
| ENC_A               | D9       | GP4         |
| ENC_B               | D10      | GP3         |

Key layout, matching the silkscreen on my PCB:

```
[SW10] [SW8] [SW9]     <- SW10 is the encoder's own push button
[SW1]  [SW2] [SW3]
[SW4]  [SW5] [SW6]
```

## Firmware

Built on QMK. There are two layers - a base layer for my everyday keys
and media, and an Fn layer (hold the bottom-right key) for extra
shortcuts. The encoder does volume on the base layer and skips tracks
on the Fn layer. The OLED just shows the current layer for now.

### Building it

```bash
python3 -m pip install qmk
qmk setup
```

Then drop this whole `friday` folder into `~/qmk_firmware/keyboards/friday/`
so it looks like:

```
qmk_firmware/keyboards/friday/
├── keyboard.json
├── config.h
├── rules.mk
├── readme.md
└── keymaps/
    └── default/
        └── keymap.c
```

Compile:

```bash
qmk compile -kb friday -km default
```

That spits out `friday_default.uf2`.

### Flashing

1. Plug the XIAO RP2040 in over USB.
2. Double-tap reset to drop it into UF2 bootloader mode - a drive
   called `RPI-RP2` shows up.
3. Drag `friday_default.uf2` onto that drive. It reboots on its own
   running the new firmware.

## Notes to self

- If a key or the encoder isn't responding, check continuity on that
  net in KiCad first - the pin table above is only as good as the
  actual soldering.
- If the encoder skips two steps per detent (or does nothing), try
  changing `ENCODER_RESOLUTION` in `config.h` between 2 and 4.
- `ENC_C` on the encoder just goes to GND, nothing to configure there.
- RGB is enabled but I haven't bound any keys to control it yet - next
  thing to add.
