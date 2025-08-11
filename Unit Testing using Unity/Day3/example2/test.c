#include "unity.h"
#include "demo.h"

void setUp(void) {}
void tearDown(void) {}

void test_even() {
    TEST_ASSERT_TRUE(is_even(2));
    TEST_ASSERT_TRUE(is_even(8));
}

void test_odd() {
    TEST_ASSERT_TRUE(is_odd(3));  // Odd numbers should return true
    TEST_ASSERT_TRUE(is_odd(7));
}

void test_max_equal() {
    TEST_ASSERT_EQUAL(3, max(2, 3));
    TEST_ASSERT_EQUAL(3, max(3, 2));
}

void test_max_not_equal() {
    TEST_ASSERT_NOT_EQUAL(2, max(2, 3));
    TEST_ASSERT_NOT_EQUAL(2, max(3, 2));
}

void test_max_greater_than() {
    TEST_ASSERT_GREATER_THAN(2, max(2, 3));
    TEST_ASSERT_GREATER_THAN(2, max(3, 2));
}

void test_max_greater_or_equal() { // Fixed macro
    TEST_ASSERT_GREATER_OR_EQUAL(3, max(3, 3));
    TEST_ASSERT_GREATER_OR_EQUAL(4, max(5, 5));
}

void test_min_less_than() {
    TEST_ASSERT_LESS_THAN(3, min(2, 3));
    TEST_ASSERT_LESS_THAN(3, min(3, 2));
}

void test_min_less_or_equal() { // Fixed macro
    TEST_ASSERT_LESS_OR_EQUAL(3, min(2, 3));
    TEST_ASSERT_LESS_OR_EQUAL(3, min(3, 2));
}

void test_max_equal_int() {
    TEST_ASSERT_EQUAL_INT(3, max_int(2, 3));
    TEST_ASSERT_EQUAL_INT(3, max_int(3, 2));
}
