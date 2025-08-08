# Unit Test:

Unit test is a peace of code that test function or clasa by applying inputs and evaluates to actual output.
(or)
Unit test is a software testing method ehere individual units or components of a software applicatin are tested.

The goal of unit testing is to validate that each unit of the software performs as expected

Adavantsges:
1. Helps to understand if code is working as expected or not
2. Provides documentation
3. Helping with finding bugs(Early bug detection)
4. Improved code quality

Test Framework:
1. Provides Assertion, Checks and Matchers
2. Help with organising the code
3. Provides report
4. Automates the execut

ex: Google Test and Mock, Unity, Catch2, Doctest, Boost.Test

# Unity

Download Unity Framework Source code.

sudo apt update
sudo apt install git
git clone https://github.com/ThrowTheSwitch/Unity.git

note:
- Include unity framework source code i.e unity.c unity.h unity_internals.h in your priject directory1

1. Include "unity.h" in your test file and also in main file

2. Write setUp and tearDown function

3. writing down test cases

4. calling test case in main

5. Makefile add unity.c, unity.o after compiling unity.c

Assertion:

1. TEST_ASSERT_EQUAL(expected, actual)