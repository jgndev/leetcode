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
  int gain[] = {-5, 1, 5, 0, -7};
  int gainSize = 5;
  int expected = 1;

  int result = largestAltitude(gain, gainSize);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_two(void) {
  int gain[] = {-4, -3, -2, -1, 4, 3, 2};
  int gainSize = 7;
  int expected = 0;

  int result = largestAltitude(gain, gainSize);

  TEST_ASSERT_EQUAL_INT(result, expected);
}


// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  return UNITY_END();
}
