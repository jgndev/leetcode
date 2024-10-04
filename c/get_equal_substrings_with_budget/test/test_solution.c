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
  char *s = "abcd";
  char *t = "bcdf";
  const int maxCost = 3;
  const int expected = 3;

  const int result = equalSubstring(s, t, maxCost);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_two(void) {
  char *s = "abcd";
  char *t = "cdef";
  const int maxCost = 3;
  const int expected = 1;

  const int result = equalSubstring(s, t, maxCost);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_three(void) {
  char *s = "abcd";
  char *t = "acde";
  const int maxCost = 0;
  const int expected = 1;

  const int result = equalSubstring(s, t, maxCost);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  return UNITY_END();
}
