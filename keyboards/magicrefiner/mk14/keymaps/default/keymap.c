/*
Copyright 2023 Sam Bartle <https://github.com/sambartle>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /*      Row:         0          1          2          3        4         5        6         7        8        9          10         11         12         13         14        */
      [_BASE] = LAYOUT_68_ansi(
	              KC_GESC,   KC_1,      KC_2,      KC_3,    KC_4,     KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_PAUS,
                  KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,     KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_PGUP,
                  KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,     KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,    KC_PGDN,
                  KC_LSFT,              KC_Z,      KC_X,    KC_C,     KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,   KC_UP,     KC_DEL,
                  KC_LCTL,   KC_LGUI,   KC_LALT,                               KC_SPC,                     KC_RALT,   MO(_FN),   KC_RGUI,   KC_LEFT,   KC_DOWN,   KC_RGHT   
      			),
      [_FN] = LAYOUT_68_ansi(
	        _______,   KC_F1,      KC_F2,      KC_F3,    KC_F4,     KC_F5,    KC_F6,     KC_F7,    KC_F8,    KC_F9,      KC_F10,      KC_F11,   KC_F12,    RGB_TOG,   RESET,
                RGB_MOD,    KC_WWW_HOME,      KC_MY_COMPUTER,      KC_MAIL,    KC_MEDIA_SELECT,     KC_CALCULATOR,    _______,     _______,    KC_PRINT_SCREEN,    KC_SCROLL_LOCK,      KC_KB_VOLUME_UP,      KC_KB_VOLUME_DOWN,   KC_KB_MUTE,   _______,   _______,
                _______,   KC_MEDIA_PREV_TRACK,      KC_MEDIA_NEXT_TRACK,      KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_STOP,     _______,    _______,     _______,    KC_INSERT,    KC_HOME,      _______,   _______,              _______,    RGB_HUI,
                _______,              _______,      _______,    _______,     _______,    _______,     _______,    _______,    KC_DEL,   KC_END,    _______,   _______,   RGB_VAI,     _______,
                _______,   _______,   _______,                               _______,                     _______,   _______,     _______,   RGB_SPI,   RGB_VAD,   RGB_SPD   
      	      ),
};

void keyboard_post_init_user(void) {
// Customise the debug level
  //debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// If console is enabled, it will print the matrix position and status of each key pressed
//  #ifdef CONSOLE_ENABLE
//    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
//  #endif
  return true;
}
