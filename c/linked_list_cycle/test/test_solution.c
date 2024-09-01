#include "unity.h"
#include "solution.h"

void setUp(void) {
  // This function runs before each test
}

void tearDown(void) {
  // This function runs after each test
}

void test_empty_list(void) {
  TEST_ASSERT_FALSE(has_cycle(NULL));
}

void test_single_node_no_cycle(void) {
  struct Node node = {1, NULL};
  TEST_ASSERT_FALSE(has_cycle(&node));
}

void test_two_nodes_no_cycle(void) {
  struct Node node1 = {1, NULL};
  struct Node node2 = {2, NULL};
  node1.next = &node2;
  TEST_ASSERT_FALSE(has_cycle(&node1));
}

void test_two_nodes_with_cycle(void) {
  struct Node node1 = {1, NULL};
  struct Node node2 = {2, NULL};
  node1.next = &node2;
  node2.next = &node1;
  TEST_ASSERT_TRUE(has_cycle(&node1));
}

void test_three_nodes_with_cycle(void) {
  struct Node node1 = {1, NULL};
  struct Node node2 = {2, NULL};
  struct Node node3 = {3, NULL};
  node1.next = &node2;
  node2.next = &node3;
  node3.next = &node1;
  TEST_ASSERT_TRUE(has_cycle(&node1));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_empty_list);
  RUN_TEST(test_single_node_no_cycle);
  RUN_TEST(test_two_nodes_no_cycle);
  RUN_TEST(test_two_nodes_with_cycle);
  RUN_TEST(test_three_nodes_with_cycle);
  return UNITY_END();
}