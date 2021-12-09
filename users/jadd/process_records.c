#include QMK_KEYBOARD_H
#include "process_records.h"

const key_override_t ctrl_space_tab_override = ko_make_basic(MOD_MASK_CTRL, MOD_SPACE, KC_TAB);
const key_override_t ctrl_q_alt_f4_override = ko_make_basic(MOD_MASK_CTRL, KC_Q, LALT(KC_F4));
const key_override_t ctrl_quote_backtick_override = ko_make_basic(MOD_MASK_CTRL, MOD_QUOTE, KC_GRAVE);

const key_override_t **key_overrides = (const key_override_t *[]) {
    &ctrl_space_tab_override,
    &ctrl_q_alt_f4_override,
    &ctrl_quote_backtick_override,
    NULL
};

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MOD_A:
        case MOD_S:
        case MOD_F:
        case MOD_QUOTE:
            return true;
        default:
            return false;
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MOD_A:
        case MOD_QUOTE:
            return 260;
        default:
            return 200;
    }
}

bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    // Ensures that all combos are tap-only
    return true;
}

__attribute__ ((weak))
bool process_record_user_kb(uint16_t keycode, keyrecord_t *record) {
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_caps_word(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case DELETE_LINE:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_HOME) SS_DELAY(100) SS_LSFT(SS_TAP(X_END)) SS_DELAY(100) SS_TAP(X_BSPACE));

            }
            break;
        case SURROUND_DQUOTE:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_LEFT));

            }
            break;
        case SURROUND_RB:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(100) SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_LEFT));

            }
            break;
        case SURROUND_AB:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_LEFT));

            }
            break;
        case SURROUND_SB:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(100) SS_TAP(X_RBRACKET) SS_DELAY(100) SS_TAP(X_LEFT));

            }
            break;
        case SURROUND_PIPE:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_BSLASH)) SS_DELAY(100) SS_LSFT(SS_TAP(X_BSLASH)) SS_DELAY(100) SS_TAP(X_LEFT));

            }
            break;
        case SURROUND_CB:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(100) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(100) SS_TAP(X_LEFT));

            }
            break;
        case SURROUND_GRAVE:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_LEFT));

            }
            break;
    }
    return true;
}
