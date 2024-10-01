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
  char *s = "abciiidef";
  int k = 3;
  int expected = 3;
  int result = max_vowels(s, k);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_two(void) {
  char *s = "aeiou";
  int k = 2;
  int expected = 2;
  int result = max_vowels(s, k);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_three(void) {
  char *s = "leetcode";
  int k = 3;
  int expected = 2;
  int result = max_vowels(s, k);

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
