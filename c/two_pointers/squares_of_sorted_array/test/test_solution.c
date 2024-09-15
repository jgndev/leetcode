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
  const int nums[] = {-4, -1, 0, 3, 10};
  const int expected[] = {0, 1, 9, 16, 100};

  const int return_size = 5;
  int *result = sorted_squares(nums, 5, return_size);

  TEST_ASSERT_EQUAL_INT_ARRAY(result, expected, return_size);
  free(result);
}

void test_case_two(void) {
  const int nums[] = {1, 2, 3, 4, 5};
  const int expected[] = {1, 4, 9, 16, 25};

  const int return_size = 5;
  int *result = sorted_squares(nums, 5, return_size);

  TEST_ASSERT_EQUAL_INT(5, return_size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, result, 5);

  free(result);
}

void test_case_three(void) {
  const int nums[] = {-7};
  const int expected[] = {49};

  const int return_size = 1;
  int *result = sorted_squares(nums, 1, return_size);

  TEST_ASSERT_EQUAL_INT(1, return_size);
  TEST_ASSERT_EQUAL_INT_ARRAY(expected, result, 1);

  free(result);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  RUN_TEST(test_case_two);
  RUN_TEST(test_case_three);
  return UNITY_END();
}
