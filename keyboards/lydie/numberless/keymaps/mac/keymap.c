#include QMK_KEYBOARD_H
#include "keymap_steno.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _STENO 1
#define _NUMBER 2
#define _FN 3
#define _SPECIAL 4

// Shortcut to make keymap more readable
#define FN      MO(_FN)
#define SPECIAL MO(_SPECIAL)
#define NUMBER  MO(_NUMBER)
#define QWERTY  DF(_QWERTY)
#define STENO   DF(_STENO)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  // Unused row
     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,                       KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,

  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐    ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_RBRC ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_ESC  ,     STENO   ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MINS ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_ENT  ,     KC_BSPC ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┬────────┤
     KC_EQL  ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_TAB  ,     KC_DEL  ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_BSLS ,
  //└────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┼────────┼────────┼────────┘
                                KC_LCTL ,NUMBER  ,KC_SPC  ,KC_LSFT ,     KC_RSFT ,KC_ROPT ,FN      ,KC_RCTL ,
  //                           └────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┘
                                         SPECIAL ,KC_LOPT ,KC_LCMD ,     KC_RCMD ,KC_LALT ,SPECIAL
  //                                    └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),
  [_STENO] = LAYOUT(
  // Unused row
     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,                       KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,

  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐    ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO   ,STN_S1  ,STN_N2  ,STN_N3  ,STN_N4  ,STN_N5  ,KC_ESC  ,     QWERTY  ,STN_N6  ,STN_N7  ,STN_N8  ,STN_N9  ,STN_TR  ,STN_DR  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO   ,STN_S1  ,STN_TL  ,STN_PL  ,STN_HL  ,STN_ST1 ,KC_ENT  ,     STN_ST3 ,STN_ST3 ,STN_FR  ,STN_PR  ,STN_LR  ,STN_SR  ,STN_ZR  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┬────────┤
     KC_NO   ,STN_S2  ,STN_KL  ,STN_WL  ,STN_RL  ,STN_ST2 ,KC_TAB  ,     STN_ST4 ,STN_ST4 ,STN_RR  ,STN_BR  ,STN_GR  ,STN_SR  ,STN_ZR  ,
  //└────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┼────────┼────────┼────────┘
                                KC_LCTL ,STN_A   ,STN_O   ,KC_NO   ,     KC_NO   ,STN_E   ,STN_U   ,FN      ,
  //                           └────────┼────────┼────────┼────────┤    ├────────┤────────┼────────┴────────┘
                                         KC_NO   ,KC_LOPT ,KC_LCMD ,     KC_RCMD ,KC_LALT ,KC_NO
  //                                    └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),
  [_FN] = LAYOUT(
  // Unused row
     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,                       KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,

  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐    ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD ,KC_EXLM ,KC_AT   ,KC_HASH ,KC_DLR  ,KC_PERC ,KC_TRNS ,     KC_TRNS ,KC_CIRC ,KC_AMPR ,KC_ASTR ,KC_LPRN ,KC_RPRN ,KC_VOLU ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MPRV ,KC_MNXT ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_LEFT ,KC_UP   ,KC_RGHT ,KC_PGUP ,KC_VOLD ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┬────────┤
     KC_BRID ,KC_BRIU ,KC_MPLY ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_INS  ,KC_TRNS ,KC_HOME ,KC_DOWN ,KC_END  ,KC_PGDN ,KC_MUTE ,
  //└────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┼────────┼────────┼────────┘
                                KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //                           └────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┘
                                         KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS
  //                                    └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),
  [_NUMBER] = LAYOUT(
  // Unused row
     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,                       KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,

  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐    ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_TRNS ,     KC_TRNS ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_4    ,KC_5    ,KC_6    ,KC_TRNS ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┬────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_1    ,KC_2    ,KC_3    ,KC_TRNS ,KC_TRNS ,
  //└────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┼────────┼────────┼────────┘
                                KC_TRNS ,KC_TRNS ,KC_LSFT ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //                           └────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┘
                                         KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS
  //                                    └────────┴────────┴────────┘    └────────┴────────┴────────┘
  ),
  [_SPECIAL] = LAYOUT(
  // Unused row
     KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,                       KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,

  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐    ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     RESET   ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,RESET   ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┼────────┼────────┼────────┬────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //└────────┼────────┼────────┼────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┼────────┼────────┼────────┘
                                KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //                           └────────┼────────┼────────┼────────┤    ├────────┼────────┼────────┴────────┘
                                         KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS
  //                                    └────────┴────────┴────────┘    └────────┴────────┴────────┘
  )
};


// Init function
void matrix_init_user() {
  steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
}
