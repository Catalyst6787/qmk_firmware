#include "keycodes.h"
#include "keymap_us.h"
#include "quantum_keycodes.h"
#include QMK_KEYBOARD_H
#define COMBO_ALLOW_ACTION_KEYS

#define LGUIA LGUI_T(KC_A)
#define LALTS LALT_T(KC_S)
#define LCTLD LCTL_T(KC_D)
#define LSFTF LSFT_T(KC_F)

#define RSFTJ RSFT_T(KC_J)
#define RCTLK RCTL_T(KC_K)
#define LALTL LALT_T(KC_L)
#define LGUISEM LGUI_T(KC_SEMICOLON)

const uint16_t PROGMEM jkl_esc[] = {RSFTJ,RCTLK,LALTL, COMBO_END};
const uint16_t PROGMEM sdf_enter[] = {LALTS, LCTLD, LSFTF, COMBO_END};
const uint16_t PROGMEM jk_min[] = {RSFTJ, RCTLK, COMBO_END};
const uint16_t PROGMEM df_unds[] = {LCTLD, LSFTF, COMBO_END};
const uint16_t PROGMEM io_cw[] = {KC_I, KC_O, COMBO_END};

combo_t key_combos[] = {
    COMBO(jkl_esc, KC_ESC),
    COMBO(sdf_enter, KC_ENTER), // keycodes with modifiers are possible too!
    COMBO(jk_min, KC_MINS),
    COMBO(df_unds, KC_UNDS),
    COMBO(io_cw, CW_TOGG)
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,LGUIA,LALTS,LCTLD,LSFTF,KC_G,  KC_H,RSFTJ,RCTLK,LALTL,LGUISEM, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                        KC_LGUI, LT(1,KC_TAB), LT(2,KC_SPC),   KC_BACKSPACE,KC_RALT,KC_ENTER
                                      //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX,  KC_F11,  KC_F12, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                KC_LGUI, _______,LT(2,KC_SPC),     KC_BACKSPACE, KC_RALT, KC_ENTER
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_CAPS_LOCK, KC_PAGE_UP, QK_MOUSE_CURSOR_UP, KC_PAGE_DOWN, XXXXXXX,                        KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_UP, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, CW_TOGG, QK_MOUSE_CURSOR_LEFT, QK_MOUSE_CURSOR_DOWN, QK_MOUSE_CURSOR_RIGHT, XXXXXXX,   KC_MEDIA_PLAY_PAUSE, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(3),                                           KC_KB_MUTE, QK_MOUSE_BUTTON_1, QK_MOUSE_BUTTON_3,  QK_MOUSE_BUTTON_2,  XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                KC_LGUI, LT(1,KC_TAB),_______,                             KC_DEL, KC_RALT, KC_ENTER //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_TAB, KC_Q, KC_W, KC_E, KC_R,                        KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_UP, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT, KC_A, KC_S, KC_D, KC_F,                       KC_MEDIA_PLAY_PAUSE, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCTL, KC_Z, KC_X, KC_C, KC_V,                       KC_KB_MUTE, TG(3), QK_MOUSE_BUTTON_3,  QK_MOUSE_BUTTON_2,  XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                MO(5), MO(4),KC_SPACE,              KC_BACKSPACE, KC_LGUI, KC_ENTER //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_ESC, KC_O, KC_I, KC_U, KC_Y,                        KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_UP, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT, KC_L, KC_K, KC_J, KC_H,                       KC_MEDIA_PLAY_PAUSE, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCTL, KC_RIGHT_ANGLE_BRACKET, KC_LEFT_ANGLE_BRACKET, KC_M, KC_N, KC_KB_MUTE, QK_MOUSE_BUTTON_1, QK_MOUSE_BUTTON_3,  QK_MOUSE_BUTTON_2,  XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                MO(5), _______,KC_SPACE,              KC_BACKSPACE, KC_LGUI, KC_ENTER //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_ESC, KC_1, KC_2, KC_3, XXXXXXX,                        KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_UP, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT, KC_4, KC_5, KC_6, KC_H,                       KC_MEDIA_PLAY_PAUSE, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCTL, KC_7, KC_8, KC_9, KC_0,                      KC_KB_MUTE, QK_MOUSE_BUTTON_1, QK_MOUSE_BUTTON_3,  QK_MOUSE_BUTTON_2,  XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                _______, MO(4),KC_SPACE,              KC_BACKSPACE, KC_LGUI, KC_ENTER //`--------------------------'  `--------------------------'
  ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
