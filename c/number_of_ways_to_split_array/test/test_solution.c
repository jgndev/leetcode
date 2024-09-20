// test_split_array.c
#include "unity.h"
#include "solution.h"

void setUp(void) {
  // This is run before EACH test
}

void tearDown(void) {
  // This is run after EACH test
}

void test_case_one(void) {
  int nums[] = {10, 4, -8, 7};
  int size = sizeof(nums) / sizeof(nums[0]);
  TEST_ASSERT_EQUAL_INT(2, ways_to_split_array(nums, size));
}

void test_case_two(void) {
  int nums[] = {2, 3, 1, 0};
  int size = sizeof(nums) / sizeof(nums[0]);
  TEST_ASSERT_EQUAL_INT(2, ways_to_split_array(nums, size));
}

void test_case_three(void) {
  int nums[] = {1000000000, 1000000000, 1000000000, 1000000000};
  int size = sizeof(nums) / sizeof(nums[0]);
  TEST_ASSERT_EQUAL_INT(2, ways_to_split_array(nums, size));
}

void test_case_four(void) {
  int nums[] = {-1, -2, -3, -4, -5};
  int size = sizeof(nums) / sizeof(nums[0]);
  TEST_ASSERT_EQUAL_INT(3, ways_to_split_array(nums, size));
}

void test_case_five(void) {
  int nums[] = {1, 1};
  int size = sizeof(nums) / sizeof(nums[0]);
  TEST_ASSERT_EQUAL_INT(1, ways_to_split_array(nums, size));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  RUN_TEST(test_case_four);
  RUN_TEST(test_case_five);
  return UNITY_END();
}