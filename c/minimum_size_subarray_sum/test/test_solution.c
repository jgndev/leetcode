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
  int nums[] = {2, 3, 1, 2, 4, 3};
  const int numsSize = 6;
  const int target = 7;
  const int expected = 2;

  const int result = minSubArrayLen(target, nums, numsSize);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_two(void) {
  int nums[] = {1, 4, 4};
  const int numsSize = 2;
  const int target = 4;
  const int expected = 1;

  const int result = minSubArrayLen(target, nums, numsSize);

  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_three(void) {
  int nums[] = {1,1,1,1,1,1,1,1};
  const int numsSize = 8;
  const int target = 11;
  const int expected = 0;

  const int result = minSubArrayLen(target, nums, numsSize);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  return UNITY_END();
}
