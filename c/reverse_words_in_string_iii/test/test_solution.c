#include "solution.h"
#include "unity.h"

void setUp(void) {
  // This function runs before each test
}

void tearDown(void) {
  // This function runs after each test
}

// BEGIN TEST IMPLEMENTATIONS

void test_case_one(void) {
  char input[] = "Let's take LeetCode contest";
  char expected[] = "s'teL ekat edoCteeL tsetnoc";

  reverseWords(input);

  TEST_ASSERT_EQUAL_STRING(input, expected);
}

void test_case_two(void) {
  char input[] = "Mr Ding";
  char expected[] = "rM gniD";

  reverseWords(input);

  TEST_ASSERT_EQUAL_STRING(input, expected);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  return UNITY_END();
}
