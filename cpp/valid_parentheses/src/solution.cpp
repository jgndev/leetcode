#include "solution.h"

#include <unordered_map>
#include <stack>

bool Solution::is_valid(std::string s) {
    std::unordered_map<char, char> pairs = {
        {'[', ']'},
        {'{', '}'},
        {'(', ')'}
    };

    std::stack<char> stack;

    for (char c : s) {
        if (pairs.find(c) != pairs.end()) {
            // it is an opening bracket
            stack.push(c);
        } else {
            // it is a closing bracket
            if (stack.empty()) {
                // stack is empty, but we found a closing bracket.
                // return false, they are not balanced.
                return false;
            }

            char top = stack.top();
            if (pairs[top] != c) {
                // mis-matched closing bracket
                return false;
            }

            // remove the last opening bracket from the stack
            stack.pop();
        }
    }

    return stack.empty();
}
