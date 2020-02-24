#include QMK_KEYBOARD_H

#include "layouts/setup.c"
#include "keycodes/custom_keycodes.c"
#include "keycodes/aliases.c"
#include "user/store_active_layer.c"
#include "user/swap_keys.c"
/* #include "tap_dance/tap_dance_setup.c" */
/* #include "tap_dance/tap_dances.c" */
/* #include "tap_dance/mod_tap_layer_dances/lalt_pipe.c" */
/* #include "tap_dance/tap_dance_actions.c" */
 #include "user/layout_switcher.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* k00,k01,k02,k0B,k0C,k0D,k5D,               k50,k00,k01,k02,k03,k04,k05,   */
  /* k18,k19,k1A,k1B,k1C,k1D,k5C,               k51,k10,k11,k12,k13,k14,k15,   */
  /* k28,k29,k2A,k2B,k2C,k2D,                       k20,k21,k22,k23,k24,k25,   */
  /* k38,k39,k3A,k3B,k3C,k3D,                       k30,k31,k32,k33,k34,k35,   */
  /* k48,k49,k4A,k4B,                                       k42,k43,k44,k45,   */
  /*                         k5B,k5A        k53,k52                            */
  /*                     k4C,k59,k58        k54,k55,k41                        */

  [DV] = LAYOUT(
    KC_NO,           KC_LPRN,    KC_AMPR,        KC_PERC,      KC_AT,      KC_LBRC,                                                    KC_RBRC,  KC_ASTR,  KC_HASH,  KC_EXLM,  KC_NO,  KC_DEL,
    LALT_T(KC_PIPE), DQUO_QUOT,  NUMS_COMM,      ARR_DOT,      KC_P,       KC_Y,     KC_LPRN,                               KC_RPRN,   KC_F,     KC_G,     KC_C,     KC_R,     KC_L,   RALT_SLSH,
    LCTL_EQL,        KC_A,       KC_O,           KC_E,         KC_U,       KC_I,     KC_LCBR,                               KC_RCBR,   KC_D,     KC_H,     KC_T,     KC_N,     KC_S,   RCTL_MINS,
    LSFT_CAPS,       COLN_SCLN,  KC_Q,           KC_J,         KC_K,       KC_X,     KC_LGUI,   UKR_QWERT,      KC_PSCR,    UKR_QWERT, KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,   RSFT_TAB,
                     KC_NO,      KC_NO,          KC_TILD,      KC_DLR,     KC_LCTL,  KC_SPC,    KC_BSPC,        KC_ESC,     KC_ENT,    KC_RALT,  KC_CIRC,  KC_GRV,   KC_INS,   KC_NO
  ),

  [QW] = LAYOUT(
    _______,         KC_1,       KC_2,           KC_3,         KC_4,       KC_5,                                                       KC_6,     KC_7,     KC_8,     KC_9,     KC_0,       _______,
    KC_BSLS,         KC_Q,       KC_W,           KC_E,         KC_R,       KC_T,     _______,                               _______,   KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,       KC_LBRACKET,
    KC_RBRC,         KC_A,       KC_S,           KC_D,         KC_F,       KC_G,     _______,                               _______,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCOLON,  KC_QUOTE,
    KC_LSFT,         KC_Z,       KC_X,           KC_C,         KC_V,       KC_B,     _______,   _______,         _______,   _______,   KC_N,     KC_M,     KC_COMMA, KC_DOT,   KC_SLASH,   RSFT_TAB,
                     _______,    _______,        _______,      _______,    _______,  _______,   _______,         _______,   _______,   _______,  _______,  _______,  _______,  _______
  ),

  [DG] = LAYOUT(
    _______,         _______,    _______,        _______,      _______,    _______,                                                    _______,  TERM,     LOCK,     _______,  _______,    _______,
    _______,         _______,    _______,        _______,      _______,    _______,  _______,                               _______,   _______,  KC_7,     KC_8,     KC_9,     _______,    _______,
    _______,         _______,    _______,        _______,      _______,    _______,  _______,                               _______,   _______,  KC_4,     KC_5,     KC_6,     KC_0,       RESET,
    _______,         _______,    _______,        _______,      _______,    _______,  _______,   _______,         _______,   _______,   _______,  KC_1,     KC_2,     KC_3,     _______,    _______,
                     _______,    _______,        _______,      _______,    _______,  _______,   _______,         _______,   _______,   _______,  _______,  _______,  _______,  _______
    ),

  [AR] = LAYOUT(
      _______,       _______,    _______,        _______,      _______,    _______,                                                    _______,  _______,  _______,  _______,  _______,    _______,
      _______,       _______,    _______,        _______,      _______,    _______,  _______,                                _______,  _______,  _______,  KC_UP,    _______,  _______,    _______,
      _______,       _______,    _______,        _______,      _______,    _______,  _______,                                _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, _______,    _______,
      _______,       _______,    _______,        _______,      _______,    _______,  _______,   _______,         _______,    _______,  _______,  WS_DOWN,  KC_DOWN,  WS_UP,    _______,    _______,
                     _______,    _______,        _______,      _______,    _______,  _______,   _______,         _______,    _______,  _______,  _______,  _______,  _______,  _______
  ),

  [FU] = LAYOUT(
      _______,       _______,    _______,        _______,      _______,    _______,                                                    _______,  KC_F10,   KC_F11,   KC_F12,   _______,    _______,
      _______,       _______,    _______,        _______,      _______,    _______,  _______,                                _______,  _______,  KC_F7,    KC_F8,    KC_F9,    _______,    _______,
      _______,       _______,    _______,        _______,      _______,    _______,  _______,                                _______,  _______,  KC_F4,    KC_F5,    KC_F6,    _______,    _______,
      _______,       _______,    _______,        _______,      _______,    _______,  _______,   _______,         _______,    _______,  _______,  KC_F1,    KC_F2,    KC_F3,    _______,    _______,
                     _______,    _______,        _______,      _______,    _______,  _______,   _______,         _______,    _______,  _______,  _______,  _______,  _______,  _______
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case EPRM:
        eeconfig_init();
        return false;
      case COLN_SCLN:
        override_key(KC_COLN, KC_SCLN);
        return false;
      case DQUO_QUOT:
        override_key(KC_DQUO, KC_QUOT);
        return false;
      case UKR_QWERT:
        switch_layout();
        return false;
    }
  }
  return true;
}
