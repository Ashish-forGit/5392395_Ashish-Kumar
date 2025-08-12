#include "demo.h"
#include "unity.h"
#include <stdlib.h>

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Clean up code if needed
}

void test_swap() {
    int a = 10;
    int b = 20;
    swap(&a, &b);
    TEST_ASSERT_EQUAL_INT(20, a);
    TEST_ASSERT_EQUAL_INT(10, b);
}

void test_swap_with_null() {
    int a = 5;
    int b = 10;
    swap(&a, &b);
    TEST_ASSERT_EQUAL_INT(5, a);
    // No assertion needed, just check for no crash
}


void test_reverse_array(void) {
    int arr[] = {1, 2, 3, 4, 5};
    reverse_array(arr, 5);
    int expected[] ={5,4,3,2,1};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5); // (expected, actual, num_elements)
}

void test_reverse_array_single_element(void) {
    int arr[] = {10};
    reverse_array(arr, 1);
    int expected[] = {10};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 1);
}

void test_reverse_array_zero_elements(void) {
    int arr[] = {1, 2, 3};
    reverse_array(arr, 0);
    int expected[] = {1, 2, 3};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 3);
    
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_swap);
    RUN_TEST(test_swap_with_null);
    RUN_TEST(test_reverse_array);
    RUN_TEST(test_reverse_array_single_element);
    return UNITY_END();
}