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

#include "artpad.h"


bool process_record_kb(uint16_t keycode, keyrecord_t* record) {
    if (!process_record_user(keycode, record)) {
        return false;
    }
    switch (keycode) {
        case MC_UNDO:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("z"));
            }
            break;
        case MC_REDO:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT("z")));
            }
            break;
        case MC_SAVE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("s"));
            }
            break;
        case MC_COPY:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("c"));
            }
            break;
        case MC_PSTE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("v"));
            }
            break;
        case MC_TRSM:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("t"));
            }
            break;
        case MC_DSLT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("d"));
            }
            break;
        case MC_ZMIN:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("="));
            }
            break;
        case MC_ZMOT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("-"));
            }
            break;
    }
    return true;
}

