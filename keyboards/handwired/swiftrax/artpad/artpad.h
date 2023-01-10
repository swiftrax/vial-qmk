/* Copyright 2023 Swiftrax <swiftrax@gmail.com>
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

enum keyboard_keycodes {
    MC_UNDO = SAFE_RANGE,
    MC_REDO,
    MC_SAVE,
    MC_COPY,
    MC_PSTE,
    MC_TRSM,
    MC_DSLT,
    MC_ZMIN,
    MC_ZMOT,
    NEW_SAFE_RANGE,
};

#define XXX KC_NO

#define LAYOUT( \
	k00, k01, k02, k03, k04, k05, \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, k22, k23, k24, k25, \
    k30, k31, k32,      k34, k35  \
) { \
	{k00, k01, k02, k03, k04, k05}, \
	{k10, k11, k12, k13, k14, k15}, \
	{k20, k21, k22, k23, k24, k25}, \
	{k30, k31, k32, XXX, k34, k35}  \
}
