#pragma once
#include QMK_KEYBOARD_H

#define MOD_A LCTL_T(KC_A)
#define MOD_S LSFT_T(KC_S)
#define MOD_D LT(2,KC_D)
#define MOD_F LALT_T(KC_F)
#define MOD_QUOTE RCTL_T(KC_QUOTE)
#define MOD_L RSFT_T(KC_L)
#define MOD_K KC_K
#define MOD_J LALT_T(KC_J)
#define MOD_SPACE KC_SPACE
#define MOD_ENTER LT(3,KC_ENTER)
#define MOD_BACKSPACE LT(1,KC_BSPACE)

enum custom_keycodes {
  CAPWORD = SAFE_RANGE,
  DELETE_LINE,
  SURROUND_DQUOTE,
  SURROUND_RB,
  SURROUND_AB,
  SURROUND_SB,
  SURROUND_PIPE,
  SURROUND_CB,
  SURROUND_GRAVE,
};

//typedef enum {
//    TD_NONE,
//    TD_UNKNOWN,
//    TD_SINGLE_TAP,
//    TD_SINGLE_HOLD,
//    TD_DOUBLE_TAP,
//    TD_DOUBLE_HOLD,
//    TD_DOUBLE_SINGLE_TAP, // Send two single taps
//    TD_TRIPLE_TAP,
//    TD_TRIPLE_HOLD
//} td_state_t;
//
//typedef struct {
//    bool is_press_action;
//    td_state_t state;
//} td_tap_t;
//
//// Tap dance enums
//enum {
//    A_CTL,
//    F_ALT,
//};

//td_state_t cur_dance(qk_tap_dance_state_t *state);
//void a_finished(qk_tap_dance_state_t *state, void *user_data);
//void a_reset(qk_tap_dance_state_t *state, void *user_data);
//void f_finished(qk_tap_dance_state_t *state, void *user_data);
//void f_reset(qk_tap_dance_state_t *state, void *user_data);
