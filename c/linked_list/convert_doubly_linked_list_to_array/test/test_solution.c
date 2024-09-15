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
  TEST_ASSERT_EQUAL_INT(function_name(), 31337);
  TEST_ASSERT_EQUAL(function_name(), 31337);
}

// END TEST IMPLEMENTATIONS

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_case_one);
  return UNITY_END();
}
