#include QMK_KEYBOARD_H
#include "version.h"
/*
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"
*/
#include "keymap_ru_type.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_176_255_255,
  HSV_103_255_163,
  HSV_43_235_219,
  HSV_0_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_NO,                                          KC_NO,          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LCTL(KC_INSERT),                                KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,       
    KC_BSPACE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           LSFT(KC_INSERT),                                                                KC_MINUS,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       
    ST_MACRO_0,     KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       ST_MACRO_1,     
    KC_NO,          KC_NO,          TD(DANCE_0),    TO(1),          OSL(5),         KC_ESCAPE,                                                                                                      KC_LGUI,        OSL(4),         TD(DANCE_1),    OSL(3),         KC_NO,          KC_NO,          
    OSM(MOD_LSFT),  KC_LCTRL,       KC_LALT,                        KC_APPLICATION, KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_NO,          ST_MACRO_2,     RU_MINS,        ST_MACRO_3,     RU_DQUO,        RU_COLN,        ST_MACRO_4,                                     ST_MACRO_6,     ST_MACRO_7,     RU_DOT,         ST_MACRO_8,     RU_QUES,        ST_MACRO_9,     RU_EXLM,        
    KC_TRANSPARENT, RU_SHTI,        RU_TSE,         RU_U,           RU_KA,          RU_IE,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RU_EN,          RU_GHE,         RU_SHA,         RU_SHCH,        RU_ZE,          RU_HA,          
    KC_TRANSPARENT, RU_EF,          RU_YERU,        RU_VE,          RU_A,           RU_PE,          KC_TRANSPARENT,                                                                 RU_MINS,        RU_ER,          RU_O,           RU_EL,          RU_DE,          RU_ZHE,         OSL(6),         
    ST_MACRO_5,     RU_YA,          RU_CHE,         RU_ES,          RU_EM,          RU_I,                                           RU_TE,          RU_SOFT,        RU_BE,          RU_YU,          RU_YO,          ST_MACRO_10,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          TD(DANCE_2),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_3),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F,           KC_P,           KC_G,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_R,           KC_S,           KC_T,           KC_D,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_K,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_0)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          HSV_176_255_255,HSV_103_255_163,HSV_43_235_219, HSV_0_255_255,  KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, MU_MOD,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          MU_TOG,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          LALT(LCTL(KC_DELETE)),                                                                AU_TOG,         KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          KC_NO,          
    KC_ENTER,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          MOON_LED_LEVEL, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, RESET,          KC_MS_BTN1,     KC_MS_BTN2,     RGB_MOD,                                                                                                        RGB_TOG,        KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_TRANSPARENT, KC_EXLM,        KC_LABK,        KC_LBRACKET,    KC_RBRACKET,    KC_RABK,        KC_NO,                                          KC_INSERT,      KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_F11,         KC_PSCREEN,     
    KC_TRANSPARENT, KC_AT,          KC_TILD,        KC_LPRN,        KC_RPRN,        KC_PIPE,        KC_NO,                                                                          KC_DELETE,      KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_F12,         KC_SCROLLLOCK,  
    KC_NO,          KC_HASH,        KC_GRAVE,       KC_LCBR,        KC_RCBR,        KC_BSLASH,                                      LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_NO,          KC_PAUSE,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          LALT(KC_F4),    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NUMLOCK,     KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          
    KC_TRANSPARENT, LCTL(LSFT(KC_ESCAPE)),LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LALT(KC_TAB),   KC_NO,                                          KC_NO,          KC_DLR,         KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_TRANSPARENT, KC_NO,          LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     KC_LALT,        KC_NO,                                                                          KC_NO,          KC_PERC,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_EQUAL,       KC_NO,          
    KC_ENTER,       KC_SPACE,       LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     LSFT(KC_TAB),                                   KC_COLN,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        ST_MACRO_11,    KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,          RU_NUM,         RU_MINS,        RU_SLSH,        RU_DQUO,        RU_SCLN,        RU_LPRN,                                        RU_RPRN,        RU_COMM,        RU_DOT,         RU_UNDS,        RU_QUES,        RU_PERC,        RU_EXLM,        
    KC_TRANSPARENT, ST_MACRO_12,    RU_HARD,        ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,    ST_MACRO_28,    RU_ZE,          RU_HA,          
    KC_TRANSPARENT, RU_E,           ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    KC_TRANSPARENT,                                                                 RU_MINS,        ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    RU_ZHE,         TO(1),          
    KC_NO,          ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,                                    ST_MACRO_33,    ST_MACRO_34,    RU_BE,          RU_YU,          RU_YO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_LGUI, KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_LCTRL, KC_ENTER, COMBO_END};
const uint16_t PROGMEM combo2[] = { OSM(MOD_LSFT), KC_ENTER, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_ESCAPE, OSM(MOD_LSFT), KC_LCTRL, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_ESCAPE, KC_LCTRL, KC_LALT, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_BSPACE, KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo6[] = { OSM(MOD_LSFT), KC_BSPACE, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LGUI(KC_SPACE)),
    COMBO(combo1, LCTL(KC_ENTER)),
    COMBO(combo2, LSFT(KC_ENTER)),
    COMBO(combo3, LCTL(LSFT(KC_ESCAPE))),
    COMBO(combo4, LGUI(LSFT(KC_S))),
    COMBO(combo5, LCTL(KC_BSPACE)),
    COMBO(combo6, KC_DELETE),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {41,255,255}, {0,255,255}, {215,255,128}, {172,255,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {172,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {129,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {172,255,255}, {172,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {172,255,255}, {0,0,0}, {41,255,255}, {0,0,255}, {41,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {41,255,255}, {23,252,180}, {41,255,255}, {0,0,255}, {0,0,255}, {41,255,255}, {0,0,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255} },

    [1] = { {0,0,0}, {0,255,255}, {215,255,128}, {172,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {41,255,255}, {129,255,255}, {215,255,128}, {172,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {23,252,180}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {172,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255} },

    [2] = { {41,255,255}, {0,255,255}, {215,255,128}, {172,255,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {41,255,255}, {0,0,255}, {215,255,128}, {0,0,255}, {172,255,255}, {41,255,255}, {215,255,128}, {215,255,128}, {0,0,255}, {129,255,255}, {41,255,255}, {215,255,128}, {215,255,128}, {0,0,255}, {86,255,255}, {41,255,255}, {215,255,128}, {215,255,128}, {0,0,255}, {0,0,0}, {172,255,255}, {172,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {172,255,255}, {0,0,0}, {41,255,255}, {215,255,128}, {215,255,128}, {41,255,255}, {0,0,0}, {41,255,255}, {215,255,128}, {215,255,128}, {41,255,255}, {23,252,180}, {41,255,255}, {215,255,128}, {215,255,128}, {41,255,255}, {215,255,128}, {41,255,255}, {215,255,128}, {215,255,128}, {0,0,255}, {0,255,255}, {41,255,255}, {215,255,128}, {0,0,255}, {215,255,128}, {0,0,0}, {0,0,0}, {41,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {0,255,255} },

    [3] = { {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {23,252,180}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {23,252,180}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {23,252,180}, {23,252,180}, {23,252,180}, {0,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {23,252,180}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {23,252,180}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {23,252,180}, {23,252,180}, {23,252,180}, {0,255,255} },

    [4] = { {0,0,0}, {0,255,255}, {215,255,128}, {0,0,0}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [5] = { {0,0,0}, {0,255,255}, {215,255,128}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {86,255,255}, {0,0,0}, {172,255,255}, {86,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,255,255}, {0,0,0}, {41,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {41,255,255}, {41,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {172,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255} },

    [6] = { {0,0,0}, {0,255,255}, {215,255,128}, {0,0,0}, {0,0,0}, {41,255,255}, {172,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {41,255,255}, {215,255,128}, {172,255,255}, {172,255,255}, {0,0,0}, {41,255,255}, {215,255,128}, {172,255,255}, {172,255,255}, {129,255,255}, {41,255,255}, {172,255,255}, {215,255,128}, {172,255,255}, {0,0,0}, {215,255,128}, {172,255,255}, {215,255,128}, {215,255,128}, {41,255,255}, {172,255,255}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {41,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {41,255,255}, {215,255,128}, {215,255,128}, {129,255,255}, {0,0,0}, {41,255,255}, {172,255,255}, {215,255,128}, {129,255,255}, {0,0,0}, {41,255,255}, {172,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {41,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {41,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      clear_oneshot_mods();
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      clear_oneshot_mods();
      SEND_STRING(SS_TAP(X_DOT) SS_DELAY(1) SS_TAP(X_SPACE));
      set_oneshot_mods(MOD_LSFT);
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      clear_oneshot_mods();
      SEND_STRING(SS_TAP(X_KP_MINUS) SS_DELAY(1) SS_TAP(X_SPACE));
      set_oneshot_mods(MOD_LSFT);
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_F) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      clear_oneshot_mods();
      SEND_STRING(SS_TAP(X_6) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      clear_oneshot_mods();
      SEND_STRING(SS_TAP(X_7) SS_DELAY(1) SS_TAP(X_SPACE));
      set_oneshot_mods(MOD_LSFT);
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_0) SS_DELAY(1) SS_TAP(X_KP_0));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(1) SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_V) SS_DELAY(1) SS_TAP(X_E) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(1) SS_TAP(X_F) SS_DELAY(1) SS_TAP(X_R) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_U) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(1) SS_TAP(X_S) SS_DELAY(1) SS_TAP(X_K) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(1) SS_TAP(X_C) SS_DELAY(1) SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_F) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_F) SS_DELAY(1) SS_TAP(X_R) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) SS_DELAY(1) SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_Z) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_X) SS_DELAY(1) SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(1) SS_TAP(X_R) SS_DELAY(1) SS_TAP(X_F) SS_DELAY(1) SS_TAP(X_P) SS_DELAY(1) SS_TAP(X_F) SS_DELAY(1) SS_TAP(X_K));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) SS_DELAY(1) SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_B) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(1) SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_U) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_D) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_X) SS_DELAY(1) SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_COMMA) SS_DELAY(1) SS_TAP(X_S) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_O) SS_DELAY(1) SS_TAP(X_SLASH) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_G) SS_DELAY(1) SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_H) SS_DELAY(1) SS_TAP(X_M) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(1) SS_TAP(X_C) SS_DELAY(1) SS_TAP(X_K) SS_DELAY(1) SS_TAP(X_B) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_U) SS_DELAY(1) SS_TAP(X_L) SS_DELAY(1) SS_TAP(X_F) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_U) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(1) SS_TAP(X_J) SS_DELAY(1) SS_TAP(X_K) SS_DELAY(1) SS_TAP(X_M) SS_DELAY(1) SS_TAP(X_R) SS_DELAY(1) SS_TAP(X_J) SS_TAP(X_SPACE));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_176_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(176,255,255);
        }
        return false;
      case HSV_103_255_163:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(103,255,163);
        }
        return false;
      case HSV_43_235_219:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(43,235,219);
        }
        return false;
      case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;

    case RU_MINS: // - in Russian should NOT be shifted
    case RU_DQUO: // \" in Russian should NOT be shifted
    if (biton32(layer_state) == 1) {
      clear_oneshot_mods();
    }
    break;

    case TO(0): // this runs when TO(ENG) is pressed (the key to toggle layer 0 on)
    case TO(2): // this runs when TO(COL) is pressed (the key to toggle layer 2 on)
    if (record->event.pressed) {
        tap_code16(LCTL(LSFT(KC_0)));
    }
    break;

    case TO(1): // this runs when TO(RUS) is pressed (the key to toggle layer 1 on)
    if (record->event.pressed) {
        tap_code16(LALT(LSFT(KC_0)));
    }
    break;

    }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_A)));
        tap_code16(LALT(LCTL(KC_A)));
        tap_code16(LALT(LCTL(KC_A)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_A)));
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_A))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_A))); register_code16(LALT(LCTL(KC_A)));
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_A))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_A))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_0)));
        tap_code16(LCTL(LSFT(KC_0)));
        tap_code16(LCTL(LSFT(KC_0)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_0)));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_0))); break;
        case DOUBLE_TAP: tap_code16(LCTL(LSFT(KC_0))); layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_0))); register_code16(LCTL(LSFT(KC_0)));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_0))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_0))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_0)));
        tap_code16(LALT(LSFT(KC_0)));
        tap_code16(LALT(LSFT(KC_0)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_0)));
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_0))); break;
        case DOUBLE_TAP: tap_code16(LCTL(LSFT(KC_0))); layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_0))); register_code16(LALT(LSFT(KC_0)));
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_0))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_0))); break;
    }
    dance_state[2].step = 0;
}
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: tap_code16(LCTL(LSFT(KC_0))); layer_move(0); break;
        case DOUBLE_TAP: tap_code16(LCTL(LSFT(KC_0))); layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_0))); layer_move(0); break;
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
};
