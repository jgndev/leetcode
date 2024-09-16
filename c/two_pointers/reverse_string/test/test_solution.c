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
  char input[] = {'h', 'e', 'l', 'l', 'o'};
  const char expected[] = {'o', 'l', 'l', 'e', 'h'};
  reverse_string(input, 5);

  TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, input, 5);
}

void test_case_two(void) {
  char input[] = {'c', 'a', 't'};
  const char expected[] = {'t', 'a', 'c'};
  reverse_string(input, 3);

  TEST_ASSERT_EQUAL_CHAR_ARRAY(expected, input, 3);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  return UNITY_END();
}
