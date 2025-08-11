#include "leapyear.h"
#include "unity.h"
#include <stdio.h>

int IsLeapYear(int yy) {
    if (yy < 0) {
        return -1;  // Invalid year
    }
    if (yy % 4 == 0) {
        if (yy % 100 == 0) {
            if (yy % 400 == 0) {
                return 1;  // Leap year
            } else {
                return 0;  // Not a leap year
            }
        } else {
            return 1;  // Leap year
        }
    }
    return 0;  // Not a leap year
}
