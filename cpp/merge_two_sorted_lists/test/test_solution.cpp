#include <gtest/gtest.h>
#include "solution.h"

// Helper function to create a linked list from a vector
Node* create_list(const std::vector<int>& values) {
    Node dummy(0);
    Node *current = &dummy;

    for (int val : values) {
        current->next = new Node(val);
        current = current->next;
    }

    return dummy.next;
}

// Helper function to convert a linked list to a vector
std::vector<int> list_to_vector(Node* head) {
    std::vector<int> result;

    while (head) {
        result.push_back(head->val);
        head = head->next;
    }

    return result;
}

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    Node* l1 = create_list({1, 3, 5});
    Node* l2 = create_list({2, 4, 6});
    Node* result = solution.merge_two_lists(l1, l2);
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(list_to_vector(result), expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    Node* l1 = create_list({1, 2, 3});
    Node* l2 = nullptr;
    Node* result = solution.merge_two_lists(l1, l2);
    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(list_to_vector(result), expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    Node* l1 = create_list({1, 2, 4});
    Node* l2 = create_list({1, 3, 4});
    Node* result = solution.merge_two_lists(l1, l2);
    std::vector<int> expected = {1, 1, 2, 3, 4, 4};
    EXPECT_EQ(list_to_vector(result), expected);
}
