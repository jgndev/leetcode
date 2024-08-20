#include <gtest/gtest.h>
#include "solution.h"

// Helper function to create a linked list from a vector
Node* create_list(const std::vector<int>& values) {
    Node dummy(0);
    Node* tail = &dummy;

    for (int v : values) {
        tail->next = new Node(v);
        tail = tail->next;
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
    Node* head = create_list({1, 1, 2, 1, 2, 3});
    Node* result = solution.frequencies_of_elements(head);
    std::vector<int> expected = {3, 2, 1};
    EXPECT_EQ(list_to_vector(result), expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    Node* head = create_list({4, 4, 4, 4});
    Node* result = solution.frequencies_of_elements(head);
    std::vector<int> expected = {4};
    EXPECT_EQ(list_to_vector(result), expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    Node* head = nullptr;
    Node* result = solution.frequencies_of_elements(head);
    std::vector<int> expected = {4};
    EXPECT_EQ(result, nullptr);
}
