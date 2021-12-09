# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
LTO_ENABLE = yes
AUDIO_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
TAP_DANCE_ENABLE = no

VPATH += keyboards/gboards/
COMBO_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

SRC += features/caps_word.c
SRC += features/select_word.c
