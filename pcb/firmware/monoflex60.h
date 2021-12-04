/* Copyright 2021 ILWrites
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

#include "quantum.h"

#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

 /***************************************************************
 *                                                             *
 *                      NOTE FOR ISO USERS                     *
 *                                                             *
 ***************************************************************
 *                                                             *
 *          ANSI and ISO layouts look like this:               *
 *                                                             *
 *               ANSI                 ISO                      *
 *           ┬─┴─┬─────┤          ┬─┴─┬─────┤                  *
 *           │1c │1d   │          │1c │1d   │                  *
 *           ┴┬──┴─────┤          ┴┬──┴─┐   │                  *
 *            │2c      │           │2c  │   │                  *
 *            ┴────────┤           ┴────┴───┤                  *
 *                                                             *
 *     If you are using ISO ENTER instead of ANSI, please,     *
 *  change the keymap of 1d key to 2d keycode and vise versa   *
 *                                  Д                           *
 ***************************************************************/

/* VARIANT 1
 * 2U Backspace, 2.25U LShift, 2.75U RShift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │10   │11 │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │30      │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c        │
 * ├────┬───┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬────┬────┤
 * │40  │41  │42   │47                         │4b   │4c  │4d  │
 * └────┴────┴─────┴───────────────────────────┴─────┴────┴────┘
*/

#define LAYOUT_v1( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c,   k0d,    \
     k10,  k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,  k1d,   \
        k20,  k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,  k2c,     \
         k30,  k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,   k3c,        \
     k40,  k41,  k42,              k47,                    k4b,    k4c,  k4d   \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, XXX }, \
    { k30, XXX, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, XXX }, \
    { k40, k41, k42, XXX, XXX, XXX, XXX, k47, XXX, XXX, XXX, k4b, k4c, k4d }  \
}

/* VARIANT 2
 * 1U Backspace, 2.25U LShift, 2.75U RShift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d │2d │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │10   │11 │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │30      │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c        │
 * ├────┬───┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬────┬────┤
 * │40  │41  │42   │47                         │4b   │4c  │4d  │
 * └────┴────┴─────┴───────────────────────────┴─────┴────┴────┘
*/

#define LAYOUT_v2( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k2d, \
     k10,  k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,  k1d,   \
        k20,  k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,  k2c,     \
       k30,  k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,  k3c,           \
     k40,  k41,  k42,              k47,                     k4b,  k4c,  k4d    \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d }, \
    { k30, XXX, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, XXX }, \
    { k40, k41, k42, XXX, XXX, XXX, XXX, k47, XXX, XXX, XXX, k4b, k4c, k4d }  \
}

/* VARIANT 3
 * 1U Backspace, 1.25U LShift, 1.75U RShift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d │2d │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │10   │11 │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c      │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
 * │30  │31 │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c    │3d │
 * ├────┼───┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬────┬┴───┤
 * │40  │41  │42   │47                         │4b   │4c  │4d  │
 * └────┴────┴─────┴───────────────────────────┴─────┴────┴────┘
*/

#define LAYOUT_all( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k2d,  \
     k10,  k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,  k1d,    \
        k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,  k2c,       \
       k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d,    \
     k40,  k41,  k42,              k47,                      k4b,  k4c,  k4d    \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d }, \
    { k40, k41, k42, XXX, XXX, XXX, XXX, k47, XXX, XXX, XXX, k4b, k4c, k4d }  \
}
