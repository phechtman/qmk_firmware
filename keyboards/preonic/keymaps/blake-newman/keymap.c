/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum preonic_layers {
  _QWERTY,
  _WORKMAN,
  _COLEMAK,
  _DVORAK,
  _GAME,
  _NUMPAD,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  WORKMAN,
  COLEMAK,
  DVORAK,
  GAME,
  NUMPAD,
  LOWER,
  RAISE,
  BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
  * ,-----------------------------------------------------------------------------------.
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Esc |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Shift|
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Num | Ctrl| GUI  | Alt  |Lower |    Space    |Raise |  Alt | GUI  | Menu | Ctrl |
  * `-----------------------------------------------------------------------------------'
  */
  [_QWERTY] = LAYOUT_preonic_1x2uC( \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
    KC_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    KC_LCTL,  TT(_NUMPAD), KC_LGUI, KC_LALT, LOWER,       KC_SPC,       RAISE,    RALT_T(KC_LEFT), RGUI_T(KC_DOWN), KC_UP, RCTL_T(KC_RIGHT)  \
  ),


/* Workman
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   R  |   W  |   B  |   J  |   F  |   U  |   P  |   ;  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   H  |   T  |   G  |   Y  |   N  |   E  |   O  |   I  |   '  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   M  |   C  |   V  |   K  |   L  |   ,  |   .  |   /  | Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Num  | GUI  | Alt  |Lower |    Space    |Raise |Alt/L |GUI/D | Up   |Ctrl/R|
 * `-----------------------------------------------------------------------------------'
 */
[_WORKMAN] = LAYOUT_preonic_1x2uC( \
  KC_GRV,       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
  KC_TAB,       KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,    KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, KC_BSPC, \
  KC_ESC,       KC_A,    KC_S,    KC_H,    KC_T,    KC_G,    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT, \
  KC_LSFT,      KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT), \
  KC_LCTL,  TT(_NUMPAD), KC_LGUI, KC_LALT, LOWER,       KC_SPC,       RAISE,   RALT_T(KC_LEFT), RGUI_T(KC_DOWN), KC_UP, RCTL_T(KC_RIGHT)  \
),




  /* Colemak
  * ,-----------------------------------------------------------------------------------.
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Esc |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  "   |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  | Shift|
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise |      |  Alt | Ctrl | Shift|
  * `-----------------------------------------------------------------------------------'
  */
  [_COLEMAK] = LAYOUT_preonic_1x2uC( \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC, \
    KC_ESC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    TT(_NUMPAD), KC_LCTL, KC_LALT, KC_LGUI, LOWER,     KC_SPC,     RAISE,   KC_RALT, KC_RGUI, KC_APP, KC_RCTL  \
  ),

  /* Dvorak
  * ,-----------------------------------------------------------------------------------.
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Esc |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  | Shift|
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise |      |  Alt | Ctrl | Shift|
  * `-----------------------------------------------------------------------------------'
  */
  [_DVORAK] = LAYOUT_preonic_1x2uC( \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC, \
    KC_ESC, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH, \
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT, \
    TT(_NUMPAD), KC_LCTL, KC_LALT, KC_LGUI, LOWER,      KC_SPC,    RAISE,   KC_RALT, KC_RGUI, KC_APP, KC_RCTL  \
  ),



  /* Game
  * ,-----------------------------------------------------------------------------------.
  * |   Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   Up  | Shift|
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | Ctrl| Alt  | Alt  |Lower |    Space    |Raise |  Gui | Right  | Down | Left |
  * `-----------------------------------------------------------------------------------'
  */
  [_GAME] = LAYOUT_preonic_1x2uC( \
    KC_ESC,  KC_1,    KC_2,    KC_5,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP, KC_RSFT, \
    KC_LCTL, KC_LCTL, KC_LALT, KC_LALT, LOWER,       KC_SPC,       RAISE,   KC_RGUI, KC_LEFT, KC_DOWN, KC_RIGHT  \
  ),




  /* Numpad
  * ,-----------------------------------------------------------------------------------.
  * | Esc  |      |      | PgDn | PgUp | Home |  End  |      |   /  |   *  |   -  | Del  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |      |  Up  |      |      |      |      |   7  |   8  |   9  |   +  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Bksp | Left | Down | Right|      |      |      |   4  |   5  |   6  |   +  |  "   |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|      |      |      |      |      |   ,  |   1  |   2  |   3  |Enter | Enter|
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Brite| Ctrl | GUI | Alt  |Lower |    Space    |    0  |   0  |   .  |Enter |   =  |
  * `-----------------------------------------------------------------------------------'
  */
  [_NUMPAD] = LAYOUT_preonic_1x2uC( \
    KC_ESC,  _______, _______, KC_PGDN, KC_PGUP, KC_END,  KC_HOME, _______, KC_PSLS, KC_PAST, KC_PMNS, KC_DEL,  \
    KC_TAB,  _______, KC_UP,   _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_BSPC, \
    KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_QUOT, \
    KC_LSFT, _______, _______, _______, _______, _______, KC_COMM, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_PENT, \
    TT(_NUMPAD), KC_LCTL, KC_LGUI, KC_LALT, LOWER,      KC_SPC,    KC_P0,   KC_P0,   KC_PDOT, KC_PENT, KC_RSFT  \
  ),


  /* Lower
  * ,-----------------------------------------------------------------------------------.
  * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |  Esc |      |  Up  |      |      |      |      |   _ |   -  |   +  |   =  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |  Caps| Left | Down | Right|      |      |      |   {  |   }  |   [  |   ]  |   \  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|   |  |      |      |      |      |      |      |      |   ¢  |   Up | Shift|
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | Brite| GUI  | Alt  |Lower |    Enter    |Raise |      | Left | Down | Right|
  * `-----------------------------------------------------------------------------------'
  */
  [_LOWER] = LAYOUT_preonic_1x2uC( \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
    KC_ESC,  _______, KC_UP,   _______, _______, _______, _______, KC_UNDS, KC_MINS, KC_PLUS, KC_EQL,  KC_BSPC, \
    KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_LSFT, KC_PIPE, _______, _______, _______, _______, _______, _______, ALGR_T(KC_4), ALGR_T(KC_5), KC_UP,  KC_RSFT, \
    TT(_NUMPAD), KC_LCTL, KC_LGUI, KC_LALT, LOWER,       KC_ENT,       RAISE,   _______, KC_LEFT, KC_DOWN, KC_RIGHT  \
  ),

  /* Raise
  * ,-----------------------------------------------------------------------------------.
  * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |  Esc |      |  Up  |      |      |      |      |   -  |   _  |   =  |   +  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Caps | Left | Down | Right|      |      |      |   [  |  ]   |   {  |   }  |   |  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|  \   |      |      |      |      |      |      |      |   ¢  |   Up | Shift|
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | Brite| GUI  | Alt  |Lower |    Enter    |Raise | Play | Vol- | Vol+ | Next |
  * `-----------------------------------------------------------------------------------'
  */
  [_RAISE] = LAYOUT_preonic_1x2uC( \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
    KC_ESC,  _______, KC_UP,   _______, _______, _______, _______, KC_MINS, KC_UNDS, KC_EQL,  KC_PLUS, KC_BSPC, \
    KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_PIPE, \
    KC_LSFT, KC_BSLS, _______, _______, _______, _______, _______, _______, _______, ALGR_T(KC_DLR), KC_UP,  KC_RSFT, \
    TT(_NUMPAD), KC_LCTL, KC_LGUI, KC_LALT, LOWER,       KC_ENT,       RAISE,   KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT  \
  ),

  /* Adjust (Lower + Raise)
  * ,-----------------------------------------------------------------------------------.
  * |      |      |      |      |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      | Reset| Debug|      |      |      |      |      |      | aPscr| sPscr| Pscr |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Caps |      |      |Aud on|AudOff|AGnorm|AGswap|Qwerty|Workman|Colemk|Game|Insert|
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
  * `-----------------------------------------------------------------------------------'
  */
  [_ADJUST] = LAYOUT_preonic_1x2uC( \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
    _______, RESET,   DEBUG,   _______, _______, _______, _______, TERM_ON, TERM_OFF,LALT(KC_PSCR), LCTL(KC_PSCR), KC_PSCR,  \
    KC_CAPS, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  WORKMAN, COLEMAK,  GAME,  KC_INS,  \
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______,      _______,     _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY  \
  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case COLEMAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_COLEMAK);
          }
          return false;
          break;
        // case DVORAK:
        //   if (record->event.pressed) {
        //     set_single_persistent_default_layer(_DVORAK);
        //   }
        //   return false;
        //   break;
        case WORKMAN:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_WORKMAN);
          }
          return false;
          break;
        // case NUMPAD:
        //   if (record->event.pressed) {
        //     set_single_persistent_default_layer(_NUMPAD);
        //   }
        //   return false;
        //   break;
        case GAME:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_GAME);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        // case BACKLIT:
        //   if (record->event.pressed) {
        //     register_code(KC_RSFT);
        //     #ifdef BACKLIGHT_ENABLE
        //       backlight_step();
        //     #endif
        //     PORTE &= ~(1<<6);
        //   } else {
        //     unregister_code(KC_RSFT);
        //     PORTE |= (1<<6);
        //   }
        //   return false;
        //   break;
      }
    return true;
};

bool numpadActive = false;

float tone_numpad_on[][2] = SONG(NUM_LOCK_ON_SOUND);

void matrix_scan_user (void) {
  uint8_t layer = biton32(layer_state);

  switch (layer) {
    case _NUMPAD:
      if (!numpadActive) {
        numpadActive = true;
        PLAY_SONG(tone_numpad_on);
      }
      break;
    default:
      if (numpadActive) {
        numpadActive = false;
      }
  }
};