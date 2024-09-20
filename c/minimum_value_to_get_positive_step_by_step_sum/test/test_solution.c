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
  const int nums[] = {-3, 2, -3, 4, 2};
  const int size = sizeof(nums) / sizeof(nums[0]);
  const int result = minStartValue(nums, size);
  const int expected = 5;
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_two(void) {
  const int nums[] = {1, 2};
  const int size = sizeof(nums) / sizeof(nums[0]);
  const int result = minStartValue(nums, size);
  const int expected = 1;
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_three(void) {
  const int nums[] = {1, -2, -3};
  const int size = sizeof(nums) / sizeof(nums[0]);
  const int result = minStartValue(nums, size);
  const int expected = 5;
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_four(void) {
  const int nums[] = {};
  const int size = 0;
  const int result = minStartValue(nums, size);
  const int expected = 1;
  TEST_ASSERT_EQUAL_INT(result, expected);
}

void test_case_five(void) {
  const int nums[] = {-5, -2, -3};
  const int size = sizeof(nums) / sizeof(nums[0]);
  const int result = minStartValue(nums, size);
  const int expected = 11;
  TEST_ASSERT_EQUAL_INT(result, expected);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  RUN_TEST(test_case_four);
  RUN_TEST(test_case_five);
  return UNITY_END();
}
