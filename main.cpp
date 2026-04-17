/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     200ms

//defining the leds
DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

// the function
void BlinkThenLed1() {

    for (int i = 0; i< 5; i++) {
        //all ON
        led1 = 1; led2 = 1; led3 = 1;
        ThisThread::sleep_for(BLINKING_RATE);
        //all OFF
        led1 = 0; led2 = 0; led3 = 0;
        ThisThread::sleep_for(BLINKING_RATE);
    }

    //only led 1 ON
    led1 = 1;
    led2 = 0;
    led3 = 0;
}

int main()
{
    led1 = 0;
    led2 = 0;
    led3 = 0;

    int count =  0;

    BlinkThenLed1();

    while (true) {
        // to keep led 1 on forever so program doesnt end
    }
}
