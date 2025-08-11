#include "demo.h"

bool is_even(int number) {
    return (number % 2 == 0);
}

bool is_odd(int number) {
    return (number % 2 != 0);
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max_int(int a, int b) {
    return (a > b) ? a : b;
}
