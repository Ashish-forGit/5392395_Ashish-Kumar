#include "unity.h"
#include "demo.h"

// External test function prototypes from test.c
void test_even(void);
void test_odd(void);
void test_max_equal(void);
void test_max_not_equal(void);
void test_max_greater_than(void);
void test_max_greater_or_equal(void);
void test_min_less_than(void);
void test_min_less_or_equal(void);
void test_max_equal_int(void);

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_even);
    RUN_TEST(test_odd);
    RUN_TEST(test_max_equal);
    RUN_TEST(test_max_not_equal);
    RUN_TEST(test_max_greater_than);
    RUN_TEST(test_max_greater_or_equal);
    RUN_TEST(test_min_less_than);
    RUN_TEST(test_min_less_or_equal);
    RUN_TEST(test_max_equal_int);

    return UNITY_END();
}
