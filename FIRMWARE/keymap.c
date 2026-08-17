#include QMK_KEYBOARD_H

enum layers {
    _BASE = 0,
    _FN
};

// Physical layout, matching my PCB silkscreen:
//
//   [SW10]  [SW8]  [SW9]      <- SW10 = encoder push button (row0/col0)
//   [SW1]   [SW2]  [SW3]
//   [SW4]   [SW5]  [SW6]
//
// Edit the keycodes below to whatever your macros/shortcuts should be.
// Full keycode reference: https://docs.qmk.fm/keycodes

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_MUTE, KC_7,     KC_8,
        KC_1,    KC_2,     KC_3,
        KC_4,    KC_5,     MO(_FN)
    ),

    [_FN] = LAYOUT(
        KC_TRNS, KC_F7,    KC_F8,
        KC_F1,   KC_F2,    KC_F3,
        KC_F4,   KC_F5,    KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
// Rotate CCW, rotate CW for each layer
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FN]   = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_0;
}

bool oled_task_user(void) {
    oled_write_P(PSTR("F.R.I.D.A.Y.\n"), false);
    oled_write_P(PSTR("------------\n"), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Layer: Base\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("Layer: Fn\n"), false);
            break;
        default:
            oled_write_P(PSTR("Layer: ?\n"), false);
            break;
    }

    return false;
}

#endif
