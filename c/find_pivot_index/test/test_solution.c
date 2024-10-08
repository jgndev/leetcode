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
  int nums[] = {1, 7, 3, 6, 5, 6};
  int numsSize = 6;
  const int expected = 3;
  const int result = pivotIndex(nums, numsSize);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_two(void) {
  int nums[] = {1, 2, 3};
  int numsSize = 3;
  const int expected = -1;
  const int result = pivotIndex(nums, numsSize);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_three(void) {
  int nums[] = {2, 1, -1};
  int numsSize = 3;
  const int expected = 0;
  const int result = pivotIndex(nums, numsSize);

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
