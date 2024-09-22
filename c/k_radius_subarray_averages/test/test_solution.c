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
  int nums[] = {1, 3, 2, 6, 2};
  int numsSize = 5;
  int k = 1;
  int returnSize;
  int expected[] = {-1, 2, 3, 3, -1};

  int* result = getAverages(nums, numsSize, k, &returnSize);

  TEST_ASSERT_EQUAL_INT(numsSize, returnSize);
  TEST_ASSERT_EQUAL_INT_ARRAY(result, expected, numsSize);

  free(result);
}

void test_case_two(void) {
  int nums[] = {7, 4, 3, 9, 1, 8, 5, 2, 6};
  int numsSize = 9;
  int k = 3;
  int returnSize;
  int expected[] = {-1, -1, -1, 5, 4, 4, -1, -1, -1};

  int* result = getAverages(nums, numsSize, k, &returnSize);

  TEST_ASSERT_EQUAL_INT(numsSize, returnSize);
  TEST_ASSERT_EQUAL_INT_ARRAY(result, expected, numsSize);

  free(result);
}


void test_case_three(void) {
  int nums[] = {5, 2, 8, 1, 9};
  int numsSize = 5;
  int k = 0;
  int returnSize;

  int* result = getAverages(nums, numsSize, k, &returnSize);

  TEST_ASSERT_EQUAL_INT(numsSize, returnSize);
  TEST_ASSERT_EQUAL_INT_ARRAY(nums, result, numsSize);

  // Don't free result here as it's the same as nums
}

void test_case_four(void) {
  int nums[] = {1, 2, 3, 4, 5};
  int numsSize = 5;
  int k = 3;
  int returnSize;
  int expected[] = {-1, -1, -1, -1, -1};

  int* result = getAverages(nums, numsSize, k, &returnSize);

  TEST_ASSERT_EQUAL_INT(numsSize, returnSize);
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, result, numsSize);

  free(result);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  RUN_TEST(test_case_four);
  return UNITY_END();
}
