#include<stdio.h>
#include "demo.h"
#include "unity.h"

void setUp(void) {
    printf("Called before each test case\n");
    printf("---------------------------------\n");
}

void tearDown(void) {
    printf("Called at end of each test case\n");
    printf("---------------------------------\n");
    // Tear down code if needed
}

void test_sum() { //test cases
    TEST_ASSERT_EQUAL(5, sum(2, 3));
    TEST_ASSERT_EQUAL(0, sum(-1, 1));
    TEST_ASSERT_EQUAL(-5, sum(-2, -3));
}

void test_square() { //test cases
    TEST_ASSERT_EQUAL(4, square(2));
    TEST_ASSERT_EQUAL(25, square(5));
    TEST_ASSERT_EQUAL(81, square(9));
}


int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
     int d = square(5);
    printf("Sum: %d\n", sum(a, b));
    printf("Square of 5: %d\n", d);

    UNITY_BEGIN();  // Start Unity testing framework

    RUN_TEST(test_sum);
    RUN_TEST(test_square);
    // Add more test cases as needed
    return UNITY_END();

}