#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_43_235_219,
  HSV_103_255_163,
  HSV_176_255_255,
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
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
  ST_MACRO_40,
  ST_MACRO_41,
  ST_MACRO_42,
  ST_MACRO_43,
  ST_MACRO_44,
  ST_MACRO_45,
  ST_MACRO_46,
  ST_MACRO_47,
  ST_MACRO_48,
  ST_MACRO_49,
  ST_MACRO_50,
  ST_MACRO_51,
  ST_MACRO_52,
  ST_MACRO_53,
  ST_MACRO_54,
  ST_MACRO_55,
  ST_MACRO_56,
  ST_MACRO_57,
  ST_MACRO_58,
  ST_MACRO_59,
  ST_MACRO_60,
  ST_MACRO_61,
  ST_MACRO_62,
  ST_MACRO_63,
  ST_MACRO_64,
  ST_MACRO_65,
  ST_MACRO_66,
  ST_MACRO_67,
  ST_MACRO_68,
  ST_MACRO_69,
  ST_MACRO_70,
  ST_MACRO_71,
  ST_MACRO_72,
  ST_MACRO_73,
  ST_MACRO_74,
  ST_MACRO_75,
  ST_MACRO_76,
  ST_MACRO_77,
  ST_MACRO_78,
  ST_MACRO_79,
  ST_MACRO_80,
  ST_MACRO_81,
  ST_MACRO_82,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_NO,                                          KC_NO,          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_PIPE,        KC_EQUAL,       KC_MINUS,       
    KC_TAB,         LT(2,KC_Q),     KC_W,           KC_F,           KC_P,           KC_G,           KC_NO,                                          KC_NO,          OSL(6),         KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_DQUO,        
    MT(MOD_LGUI, KC_BSPC),KC_A,           KC_R,           KC_S,           KC_T,           KC_D,           KC_NO,                                                                          KC_NO,          KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,       
    ST_MACRO_0,     MT(MOD_LSFT, KC_Z),MT(MOD_LALT, KC_X),KC_C,           KC_V,           KC_B,                                           KC_K,           KC_M,           KC_COMMA,       MT(MOD_RALT, KC_DOT),MT(MOD_RSFT, KC_SLASH),ST_MACRO_1,     
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          TD(DANCE_0),    KC_NO,                                                                                                          KC_NO,          LT(3,KC_SPACE), KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    TD(DANCE_1),    KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, ST_MACRO_2,     RU_MINS,        ST_MACRO_3,     RU_DQUO,        RU_COLN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_6,     RU_DOT,         ST_MACRO_7,     RU_QUES,        ST_MACRO_8,     RU_EXLM,        
    TD(DANCE_2),    LT(2,RU_SHTI),  RU_TSE,         RU_U,           RU_KA,          RU_IE,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RU_EN,          RU_GHE,         RU_SHA,         RU_SHCH,        RU_ZE,          RU_HA,          
    MT(MOD_LGUI, KC_BSPC),ST_MACRO_4,     RU_YERU,        RU_VE,          RU_A,           RU_PE,          KC_TRANSPARENT,                                                                 KC_NO,          RU_ER,          RU_O,           RU_EL,          RU_DE,          RU_ZHE,         OSL(5),         
    ST_MACRO_5,     MT(MOD_LSFT, RU_YA),MT(MOD_LALT, RU_CHE),RU_ES,          RU_EM,          RU_I,                                           RU_TE,          RU_SOFT,        RU_BE,          MT(MOD_RALT, RU_YU),MT(MOD_RSFT, RU_YO),ST_MACRO_9,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          RGB_TOG,        TOGGLE_LAYER_COLOR,KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, MU_NEXT,        AU_TOGG,        KC_HYPR,        KC_MEH,         KC_NO,          QK_BOOT,        
    KC_NO,          KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        ST_MACRO_10,    ST_MACRO_11,    KC_NO,                                          KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_MS_UP,       KC_AUDIO_VOL_UP,KC_CAPS,        KC_NO,          
    KC_NO,          KC_NO,          RGB_HUD,        RGB_HUI,        LALT(LCTL(KC_A)),LALT(LCTL(KC_DELETE)),KC_NO,                                                                          KC_NO,          MU_TOGG,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN2,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_MODE_FORWARD,RGB_SLD,                                        MOON_LED_LEVEL, HSV_0_255_255,  HSV_43_235_219, HSV_103_255_163,HSV_176_255_255,KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, KC_NO,                                                                                                          KC_NO,          KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_LABK,        KC_LBRC,        KC_RBRC,        KC_RABK,        KC_NO,                                          KC_NO,          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_F11,         KC_PSCR,        
    KC_DELETE,      KC_NO,          KC_GRAVE,       KC_LPRN,        KC_RPRN,        KC_PIPE,        KC_NO,                                                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_F12,         KC_SCRL,        
    KC_NO,          KC_NO,          KC_TILD,        KC_LCBR,        KC_RCBR,        KC_BSLS,                                        LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_INSERT,      KC_PAUSE,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          LALT(KC_F4),    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          
    KC_TRANSPARENT, LGUI(KC_9),     LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     KC_NO,          KC_NO,                                          KC_NO,          KC_DLR,         KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          LGUI(KC_8),     LGUI(KC_4),     LGUI(KC_5),     LGUI(KC_6),     KC_LEFT_ALT,    KC_NO,                                                                          KC_NO,          KC_PERC,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_EQUAL,    KC_SPACE,       
    KC_ENTER,       KC_SPACE,       LGUI(KC_7),     LCTL(KC_INSERT),LSFT(KC_INSERT),LSFT(KC_TAB),                                   KC_COLN,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_KP_ENTER,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_SPACE)
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, RU_NUM,         RU_PLUS,        RU_SLSH,        RU_LPRN,        RU_SCLN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, RU_COMM,        RU_RPRN,        RU_UNDS,        RU_BSLS,        RU_PERC,        RU_EQL,         
    ST_MACRO_12,    ST_MACRO_13,    RU_HARD,        ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    KC_NO,                                          KC_NO,          ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    ST_MACRO_33,    ST_MACRO_34,    KC_NO,          
    ST_MACRO_17,    RU_EF,          ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    KC_NO,                                                                          KC_NO,          ST_MACRO_35,    ST_MACRO_36,    ST_MACRO_37,    ST_MACRO_38,    ST_MACRO_39,    RU_E,           
    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,                                    ST_MACRO_40,    ST_MACRO_41,    ST_MACRO_42,    ST_MACRO_43,    ST_MACRO_44,    KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_28,    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, ST_MACRO_45,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_29,    KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_46
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          
    ST_MACRO_47,    ST_MACRO_48,    ST_MACRO_49,    ST_MACRO_50,    ST_MACRO_51,    ST_MACRO_52,    KC_NO,                                          KC_NO,          KC_J,           ST_MACRO_67,    ST_MACRO_68,    ST_MACRO_69,    ST_MACRO_70,    KC_NO,          
    ST_MACRO_53,    ST_MACRO_54,    ST_MACRO_55,    ST_MACRO_56,    ST_MACRO_57,    ST_MACRO_58,    KC_NO,                                                                          KC_NO,          ST_MACRO_71,    ST_MACRO_72,    ST_MACRO_73,    ST_MACRO_74,    ST_MACRO_75,    KC_NO,          
    ST_MACRO_59,    ST_MACRO_60,    ST_MACRO_61,    ST_MACRO_62,    ST_MACRO_63,    ST_MACRO_64,                                    ST_MACRO_76,    ST_MACRO_77,    ST_MACRO_78,    ST_MACRO_79,    ST_MACRO_80,    KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_65,    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, ST_MACRO_81,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_66,    KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_82
  ),
};
const uint16_t PROGMEM combo0[] = { MT(MOD_LGUI, KC_BSPC), RU_GHE, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_LEFT_CTRL, RU_U, COMBO_END};
const uint16_t PROGMEM combo2[] = { RU_VE, KC_LEFT_CTRL, COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_LALT, RU_CHE), KC_LEFT_CTRL, COMBO_END};
const uint16_t PROGMEM combo4[] = { RU_A, KC_LEFT_CTRL, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_LEFT_CTRL, RU_YERU, COMBO_END};
const uint16_t PROGMEM combo6[] = { RU_PE, KC_LEFT_CTRL, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LGUI(KC_L)),
    COMBO(combo1, LCTL(KC_F)),
    COMBO(combo2, LCTL(KC_S)),
    COMBO(combo3, LCTL(KC_X)),
    COMBO(combo4, LCTL(KC_A)),
    COMBO(combo5, LCTL(KC_R)),
    COMBO(combo6, LCTL(KC_D)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,255}, {0,0,255}, {0,255,255}, {41,255,255}, {215,255,128}, {41,255,255}, {172,255,255}, {0,0,0}, {215,255,128}, {41,255,255}, {0,0,255}, {41,255,255}, {0,0,0}, {215,255,128}, {0,0,255}, {0,0,255}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {41,255,255}, {215,255,128}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,255}, {0,0,255}, {0,255,255} },

    [1] = { {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {172,255,255}, {129,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {41,255,255}, {129,255,255}, {215,255,128}, {172,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {41,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {172,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255} },

    [2] = { {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {23,252,180}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,252,180}, {23,252,180}, {23,252,180}, {0,255,255}, {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {23,252,180}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {23,252,180}, {23,252,180}, {23,252,180}, {0,255,255} },

    [3] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [4] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {86,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {0,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {41,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255} },

    [5] = { {0,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {0,0,0}, {41,255,255}, {172,255,255}, {172,255,255}, {215,255,128}, {0,0,0}, {215,255,128}, {215,255,128}, {172,255,255}, {172,255,255}, {0,0,0}, {41,255,255}, {215,255,128}, {172,255,255}, {215,255,128}, {0,0,0}, {215,255,128}, {172,255,255}, {215,255,128}, {172,255,255}, {215,255,128}, {215,255,128}, {172,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {215,255,128}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {0,0,0}, {215,255,128}, {172,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {41,255,255}, {172,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {215,255,128}, {172,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {41,255,255}, {172,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255} },

    [6] = { {0,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {0,0,0}, {215,255,128}, {215,255,128}, {172,255,255}, {215,255,128}, {0,0,0}, {215,255,128}, {172,255,255}, {172,255,255}, {215,255,128}, {0,0,0}, {215,255,128}, {172,255,255}, {215,255,128}, {215,255,128}, {0,0,0}, {215,255,128}, {215,255,128}, {172,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {215,255,128}, {215,255,128}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,128}, {215,255,128}, {172,255,255}, {172,255,255}, {0,0,0}, {215,255,128}, {172,255,255}, {215,255,128}, {172,255,255}, {0,0,0}, {215,255,128}, {215,255,128}, {215,255,128}, {172,255,255}, {0,0,0}, {215,255,128}, {172,255,255}, {172,255,255}, {215,255,128}, {215,255,128}, {215,255,128}, {215,255,128}, {215,255,128}, {215,255,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_6) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_7) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_K));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SCLN) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_Z) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_T));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_Z) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_SLASH) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_F));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_F));
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_SCLN) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_K));
    }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_41:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_R));
    }
    break;
    case ST_MACRO_42:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_Z));
    }
    break;
    case ST_MACRO_43:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
    case ST_MACRO_44:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_B));
    }
    break;
    case ST_MACRO_45:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_46:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_47:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_48:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_49:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_50:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_51:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_52:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_53:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_54:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_55:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_56:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_57:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_58:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_59:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_60:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_61:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_62:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_63:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_64:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_65:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_66:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_67:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_K) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_68:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_T));
    }
    break;
    case ST_MACRO_69:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_70:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_71:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_72:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_73:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_Y) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_74:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_R));
    }
    break;
    case ST_MACRO_75:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_76:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_77:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_78:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_COMMA) SS_DELAY(100) SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_79:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT) SS_DELAY(100) SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_80:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SLASH)) SS_DELAY(100) SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_81:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_82:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));
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
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
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
    case HSV_103_255_163:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(103,255,163);
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

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
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


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_4)));
        tap_code16(LALT(LSFT(KC_4)));
        tap_code16(LALT(LSFT(KC_4)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_4)));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_4))); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_4))); register_code16(LALT(LSFT(KC_4))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_4))); register_code16(LALT(LSFT(KC_4)));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_4))); break;
        case SINGLE_HOLD:
          layer_off(4);
        break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_4))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_4))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_5)));
        tap_code16(LALT(LSFT(KC_5)));
        tap_code16(LALT(LSFT(KC_5)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_5)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_5))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_5))); register_code16(LALT(LSFT(KC_5))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_5))); register_code16(LALT(LSFT(KC_5)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_5))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_5))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_5))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};
