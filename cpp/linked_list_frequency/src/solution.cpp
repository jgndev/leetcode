#include "solution.h"

#include <unordered_map>

Node* Solution::frequencies_of_elements(Node* head) {
    // return early if head is nullptr
    if (head == nullptr) {
        Node* node(nullptr);
        return node;
    }

    std::unordered_map<int, int> frequencies;

    Node* current = head;

    // loop through the nodes and add the values to the frequencies map
    while (current != nullptr) {
        frequencies[current->val]++;
        current = current->next;
    }

    // convert to a vector and sort
    std::vector<int> freq_vec;
    // resize to be sufficient to hold values from frequencies map
    freq_vec.reserve(frequencies.size() -1 );

    for (const auto& [value, freq] : frequencies) {
        freq_vec.push_back(freq);
    }

    std::sort(freq_vec.begin(), freq_vec.end(), std::greater<int>());

    // create new list with sorted frequencies
    Node dummy(0);
    Node* tail = &dummy;

    for (int freq : freq_vec) {
        tail->next = new Node(freq);
        tail = tail->next;
    }

    return dummy.next;
}