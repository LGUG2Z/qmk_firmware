/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define USB_SUSPEND_WAKEUP_DELAY 0
#define COMBO_VARIABLE_LEN
#define COMBO_TERM 35
#define ONESHOT_TAP_TOGGLE 2

// Configure the global tapping term (default: 200ms)
#undef TAPPING_TERM
#define TAPPING_TERM 225
#define TAPPING_TERM_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD_PER_KEY

#define COMBO_MUST_TAP_PER_COMBO
