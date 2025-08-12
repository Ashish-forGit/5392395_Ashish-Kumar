#include "demo.h"
#include "unity.h"
#include <stdlib.h>

void setUp() {
    // Set up code if needed
}

void tearDown() {
    // Clean up code if needed
}

void test_initialize_person() {
    Person p;
    initialize_person(&p, 25, 175.5f);
    TEST_ASSERT_EQUAL(25, p.age);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 175.5f, p.height);
}

void test_update_age() {
    Person p = {20, 180.0f};
    update_age(&p, 30);
    TEST_ASSERT_EQUAL_INT(30, p.age);
}

void test_is_adult_true() {
    Person p1 = {18, 170.0f};
    TEST_ASSERT_TRUE(is_adult(&p1)); // Is an adult
}

void test_is_adult_false() {
    Person p1 = {17, 160.0f};
    TEST_ASSERT_FALSE(is_adult(&p1)); // Not an adult
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_initialize_person);
    RUN_TEST(test_update_age);
    RUN_TEST(test_is_adult_true);
    RUN_TEST(test_is_adult_false);
    return UNITY_END();
}