/* Copyright 2023
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

#pragma once

#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ № │ - │ / │ " │ : │ , │ . │ _ │ ? │ % │ ! │ ; │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Й │ Ц │ У │ К │ Е │ Н │ Г │ Ш │ Щ │ З │ Х │ Ъ │  )  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ Ф │ Ы │ В │ А │ П │ Р │ О │ Л │ Д │ Ж │ Э │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ Я │ Ч │ С │ М │ И │ Т │ Ь │ Б │ Ю │ Ё │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define RUT_PIPE KC_GRV  // |
#define RUT_NUM  KC_1    // №
#define RUT_MINS KC_2    // -
#define RUT_SLSH KC_3    // /
#define RUT_DQUO KC_4    // "
#define RUT_COLN KC_5    // :
#define RUT_COMM KC_6    // ,
#define RUT_DOT  KC_7    // .
#define RUT_UNDS KC_8    // _
#define RUT_QUES KC_9    // ?
#define RUT_PERC KC_0    // %
#define RUT_EXLM KC_MINS // !
#define RUT_SCLN KC_EQL  // ;
// Row 2
#define RUT_SHTI KC_Q    // Й
#define RUT_TSE  KC_W    // Ц
#define RUT_U    KC_E    // У
#define RUT_KA   KC_R    // К
#define RUT_IE   KC_T    // Е
#define RUT_EN   KC_Y    // Н
#define RUT_GHE  KC_U    // Г
#define RUT_SHA  KC_I    // Ш
#define RUT_SHCH KC_O    // Щ
#define RUT_ZE   KC_P    // З
#define RUT_HA   KC_LBRC // Х
#define RUT_HARD KC_RBRC // Ъ
#define RUT_RPRN KC_BSLS // )
// Row 3
#define RUT_EF   KC_A    // Ф
#define RUT_YERU KC_S    // Ы
#define RUT_VE   KC_D    // В
#define RUT_A    KC_F    // А
#define RUT_PE   KC_G    // П
#define RUT_ER   KC_H    // Р
#define RUT_O    KC_J    // О
#define RUT_EL   KC_K    // Л
#define RUT_DE   KC_L    // Д
#define RUT_ZHE  KC_SCLN // Ж
#define RUT_E    KC_QUOT // Э
// Row 4
#define RUT_YA   KC_Z    // Я
#define RUT_CHE  KC_X    // Ч
#define RUT_ES   KC_C    // С
#define RUT_EM   KC_V    // М
#define RUT_I    KC_B    // И
#define RUT_TE   KC_N    // Т
#define RUT_SOFT KC_M    // Ь
#define RUT_BE   KC_COMM // Б
#define RUT_YU   KC_DOT  // Ю
#define RUT_YO   KC_SLSH // Ё

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ + │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ = │ \ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │  (  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define RUT_PLUS S(RUT_PIPE) // +
#define RUT_1    S(RUT_NUM)  // 1
#define RUT_2    S(RUT_MINS) // 2
#define RUT_3    S(RUT_SLSH) // 3
#define RUT_4    S(RUT_DQUO) // 4
#define RUT_5    S(RUT_COLN) // 5
#define RUT_6    S(RUT_COMM) // 6
#define RUT_7    S(RUT_DOT)  // 7
#define RUT_8    S(RUT_UNDS) // 8
#define RUT_9    S(RUT_QUES) // 9
#define RUT_0    S(RUT_PERC) // 0
#define RUT_EQL  S(RUT_EXLM) // =
#define RUT_BSLS S(RUT_SCLN) // (backslash)
// Row 2
#define RUT_LPRN S(RUT_RPRN) // (

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │ ₽ │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define RUT_RUBL ALGR(RUT_8) // ₽
