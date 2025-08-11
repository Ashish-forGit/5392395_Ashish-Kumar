#ifndef _DEMO_H
#define _DEMO_H
#include <stdbool.h>

// Function prototypes
bool is_even(int number);
bool is_odd(int number);   // Added
int max(int a, int b);
int min(int a, int b);
int max_int(int a, int b); // Added

// Test prototypes
void test_even();
void test_odd();
void test_max_equal();
void test_max_not_equal();
void test_max_greater_than();
void test_max_greater_or_equal();   // Fixed name
void test_min_less_than();
void test_min_less_or_equal();      // Fixed name
void test_max_equal_int();

#endif
