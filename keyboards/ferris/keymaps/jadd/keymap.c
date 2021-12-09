// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#include "jadd.h"

#include "g/keymap_combo.h"
#include "version.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,        KC_Y, KC_U,         KC_I,     KC_O,   KC_P,
    MOD_A, MOD_S, MOD_D, MOD_F, KC_G,        KC_H, MOD_J,        KC_K,     MOD_L,  MOD_QUOTE,
    KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,        KC_N, RGUI_T(KC_M), KC_COMMA, KC_DOT, KC_SLASH,

    MOD_BACKSPACE, OSM(MOD_LSFT),       MOD_ENTER, MOD_SPACE
  ),
  [1] = LAYOUT(
    KC_TRNS,       C(KC_BSPACE), C(KC_DELETE), KC_TRNS, KC_TRNS,       KC_TRNS, DELETE_LINE, KC_TRNS,     KC_TRNS,  KC_PIPE,
    OSM(MOD_LCTL), CAPWORD,      TG(2),        KC_TRNS, KC_TRNS,       KC_LEFT, KC_DOWN,     KC_UP,       KC_RIGHT, KC_SCOLON,
    KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS, KC_TRNS,       KC_TRNS, C(KC_LEFT),  C(KC_RIGHT), KC_TRNS,  KC_TRNS,

    KC_TRNS, RESET,      CAPWORD,  OSM(MOD_LCTL)
  ),
  [2] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_EQUAL, KC_7, KC_8, KC_9, KC_BSLASH,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_MINUS, KC_4, KC_5, KC_6, KC_SCOLON,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_0,     KC_1, KC_2, KC_3, KC_SLASH,

    KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT(
    SURROUND_DQUOTE, KC_RIGHT,    KC_TRNS,     SURROUND_RB,   KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    SURROUND_AB,     SURROUND_SB, KC_TRNS,     SURROUND_PIPE, KC_SLASH,           KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS,
    C(KC_Z),         KC_TRNS,     SURROUND_CB, KC_TRNS,       SURROUND_GRAVE,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    KC_DELETE,  KC_TRNS,    KC_TRNS, KC_TRNS
  ),
};;


