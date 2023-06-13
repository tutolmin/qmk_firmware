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
#define RU_PIPE KC_GRV  // |
#define RU_NUM  KC_1    // №
#define RU_MINS KC_2    // -
#define RU_SLSH KC_3    // /
#define RU_DQUO KC_4    // "
#define RU_COLN KC_5    // :
#define RU_COMM KC_6    // ,
#define RU_DOT  KC_7    // .
#define RU_UNDS KC_8    // _
#define RU_QUES KC_9    // ?
#define RU_PERC KC_0    // %
#define RU_EXLM KC_MINS // !
#define RU_SCLN KC_EQL  // ;
// Row 2
#define RU_SHTI KC_Q    // Й
#define RU_TSE  KC_W    // Ц
#define RU_U    KC_E    // У
#define RU_KA   KC_R    // К
#define RU_IE   KC_T    // Е
#define RU_EN   KC_Y    // Н
#define RU_GHE  KC_U    // Г
#define RU_SHA  KC_I    // Ш
#define RU_SHCH KC_O    // Щ
#define RU_ZE   KC_P    // З
#define RU_HA   KC_LBRC // Х
#define RU_HARD KC_RBRC // Ъ
#define RU_RPRN KC_BSLS // )
// Row 3
#define RU_EF   KC_A    // Ф
#define RU_YERU KC_S    // Ы
#define RU_VE   KC_D    // В
#define RU_A    KC_F    // А
#define RU_PE   KC_G    // П
#define RU_ER   KC_H    // Р
#define RU_O    KC_J    // О
#define RU_EL   KC_K    // Л
#define RU_DE   KC_L    // Д
#define RU_ZHE  KC_SCLN // Ж
#define RU_E    KC_QUOT // Э
// Row 4
#define RU_YA   KC_Z    // Я
#define RU_CHE  KC_X    // Ч
#define RU_ES   KC_C    // С
#define RU_EM   KC_V    // М
#define RU_I    KC_B    // И
#define RU_TE   KC_N    // Т
#define RU_SOFT KC_M    // Ь
#define RU_BE   KC_COMM // Б
#define RU_YU   KC_DOT  // Ю
#define RU_YO   KC_SLSH // Ё

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
#define RU_PLUS S(RU_PIPE) // +
#define RU_1    S(RU_NUM)  // 1
#define RU_2    S(RU_MINS) // 2
#define RU_3    S(RU_SLSH) // 3
#define RU_4    S(RU_DQUO) // 4
#define RU_5    S(RU_COLN) // 5
#define RU_6    S(RU_COMM) // 6
#define RU_7    S(RU_DOT)  // 7
#define RU_8    S(RU_UNDS) // 8
#define RU_9    S(RU_QUES) // 9
#define RU_0    S(RU_PERC) // 0
#define RU_EQL  S(RU_EXLM) // =
#define RU_BSLS S(RU_SCLN) // (backslash)
// Row 2
#define RU_LPRN S(RU_RPRN) // (

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
#define RU_RUBL ALGR(RU_UNDS) // ₽
