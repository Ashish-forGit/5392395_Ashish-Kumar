#include "demo.h"
#include "unity.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Clean up code if needed
}

void test_calculate_average()
{
    int arr[] = {1, 2, 3, 4, 5};
    float result = calculate_average(arr, 5);
    TEST_ASSERT_FLOAT_WITHIN(0.001, 3.0f, result);
    // TEST_ASSERT_FLOAT_WITHIN(delta, expected, actual);
}

void test_calculate_average_single_element()
{
    int arr[] = {42};
    float result = calculate_average(arr, 1);
    TEST_ASSERT_FLOAT_WITHIN(0.001, 42.0f, result);
}

void test_calculate_average_zero_elements()
{
    int arr[] = {};
    float result = calculate_average(arr, 0);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.0, result);
}

void test_calculate_average_negative_numbers()
{
    int arr[] = {-1, -2, -3, -4, -5};
    float result = calculate_average(arr, 5);
    TEST_ASSERT_FLOAT_WITHIN(0.01, -3.0, result);
}

// TEST_ASSERT_EMPTY

void test_empty_string()
{
    const char *str = "";
    TEST_ASSERT_EMPTY(str);
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_calculate_average);
    RUN_TEST(test_calculate_average_single_element);
    RUN_TEST(test_calculate_average_zero_elements);
    RUN_TEST(test_calculate_average_negative_numbers);
    RUN_TEST(test_empty_string);
    return UNITY_END();
}