// Copyright 2023 Framework Computer
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"
#include "numpad.h"

void keyboard_post_init_user(void) {
    // Sync initial numlock state from the host
<<<<<<< HEAD
    if (host_keyboard_led_state().num_lock) {
        layer_on(_NUMLOCK);
    } else {
        layer_off(_FN);
    }
=======
    //if (host_keyboard_led_state().num_lock) {
        //layer_on(_NUMLOCK);
    //} else {
        //layer_off(_FN);
    //}
>>>>>>> fl16-bisect
}
