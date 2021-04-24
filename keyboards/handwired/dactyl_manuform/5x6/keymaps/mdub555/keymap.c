/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _GAMING 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,          KC_6   , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
        KC_CAPS, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,          KC_Y   , KC_U  , KC_I  , KC_O  , KC_P  , KC_EQL,
        KC_TAB , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,          KC_H   , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_ESC , KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,          KC_N   , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_BSLS,
                         KC_INS,KC_LGUI,                                          KC_LBRC,KC_RBRC,
                                        KC_LSFT,KC_BSPC,        KC_SFTENT, KC_SPC,
                                        KC_LCTL,KC_LALT,          KC_LALT,KC_RCTL,
                                        TT(1)  , TT(2) ,          TT(3)  , KC_DEL
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH, KC_DLR,KC_PERC,          KC_CIRC,KC_AMPR,KC_PAST,KC_LPRN,KC_RPRN,KC_NLCK,
        XXXXXXX,XXXXXXX,XXXXXXX,KC_UNDS,KC_PIPE,KC_LBRC,          KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,KC_PMNS,KC_PSLS,
        XXXXXXX,KC_HOME,KC_PGUP,KC_PGDN, KC_END,KC_LPRN,          KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_PPLS,KC_PAST,
        TO(0)  ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_PSCR,          KC_PCMM, KC_P1 , KC_P2 , KC_P3 ,KC_PEQL,XXXXXXX,
                        _______,_______,                                           KC_P0 ,KC_PDOT,
                                        _______,_______,          _______,_______,
                                        _______,_______,          _______,_______,
                                        _______,_______,          _______,_______
    ),

    [_RAISE] = LAYOUT_5x6(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,          KC_F6  , KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_MUTE,          XXXXXXX,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,XXXXXXX,
        XXXXXXX,KC_BRIU,KC_MPRV,KC_MPLY,KC_MNXT,KC_VOLU,          XXXXXXX,KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,XXXXXXX,
        TO(0)  ,KC_BRID,XXXXXXX,XXXXXXX,XXXXXXX,KC_VOLD,          XXXXXXX,KC_HOME,KC_WH_D,KC_WH_U, KC_END,XXXXXXX,
                        _______,_______,                                          XXXXXXX,XXXXXXX,
                                        _______,_______,          KC_BTN2,KC_BTN1,
                                        _______,_______,          KC_BTN3,KC_BTN5,
                                        _______,_______,          _______,KC_BTN4
    ),

    [_GAMING] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,          KC_6   , KC_7  , KC_8  , KC_9  , KC_0  ,XXXXXXX,
        XXXXXXX, KC_TAB, KC_Q  , KC_W  , KC_E  , KC_R  ,          KC_T   , KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,
        XXXXXXX,KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  ,          KC_G   , KC_H  , KC_J  , KC_K  , KC_L  ,XXXXXXX,
        KC_ESC ,XXXXXXX, KC_Z  , KC_X  , KC_C  , KC_V  ,          KC_B   , KC_N  , KC_M  ,XXXXXXX,XXXXXXX,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                          XXXXXXX,XXXXXXX,
                                         KC_SPC, KC_SPC,          _______,_______,
                                        _______,_______,          _______,_______,
                                        _______,_______,          TO(0),  _______
    ),
};
