#include "leapyear.h"
#include "unity.h"
#include <stdio.h>

void setUp(void) {
    // Optional: set up before each test
}

void tearDown(void) {
    // Optional: clean up after each test
}
    
void test_IsLeapYear(void) {
    TEST_ASSERT_EQUAL_INT(1, IsLeapYear(2020));  // Leap year
    TEST_ASSERT_EQUAL_INT(0, IsLeapYear(1900));  // Not a leap year
    TEST_ASSERT_EQUAL_INT(1, IsLeapYear(2000));  // Leap year
    TEST_ASSERT_EQUAL_INT(-1, IsLeapYear(-4));   // Invalid year
}

void test_IsLeapYear_Invalid(void) {
    TEST_IGNORE();
    TEST_ASSERT_EQUAL(-1, IsLeapYear(2000));  // Invalid year
}
void test_non_leap_year(void) {
    TEST_ASSERT_EQUAL_INT(0, IsLeapYear(2019));  // Not a leap year
    TEST_ASSERT_EQUAL_INT(0, IsLeapYear(2021));  // Not a leap year
}

void test_centuries(void) {
    TEST_ASSERT_EQUAL_INT(1, IsLeapYear(2000));  // Leap year
    TEST_ASSERT_EQUAL_INT(0, IsLeapYear(1900));  // Not a leap year
}

int main(void) {

    UNITY_BEGIN();


    RUN_TEST(test_IsLeapYear);

    #if !defined(DISABLE_TESTS)
    RUN_TEST(test_non_leap_year);
    RUN_TEST(test_centuries);
    #endif

    RUN_TEST(test_centuries);
    
    RUN_TEST(test_IsLeapYear_Invalid);
    return UNITY_END();
}
