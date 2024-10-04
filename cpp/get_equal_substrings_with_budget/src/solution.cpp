#include "solution.h"

int Solution::equalSubstring(std::string s, std::string t, int maxCost) {
  // get the length of s once
  int n = static_cast<int>(s.size());

  // maxLen: keep track of the maximum length of valid substring found so far.
  // start: the start index of the current window.
  // currCost: the current cost of operations in our window.
  int maxLen = 0, start = 0, currCost = 0;

  for (int i = 0; i < n; ++i) {
    // calculate the cost to change the current character in s to the character
    // in t. abs() used because cost is the absolute difference in ASCII values.
    currCost += abs(s[i] - t[i]);

    // if the current cost exceeds the budget (maxCost) we need to shrink the window.
    while (currCost > maxCost) {
      // remove the cost of the leftmost character in the window.
      currCost -= abs(s[start] - t[start]);
      // move the start of the window one step forward.
      ++start;
    }

    // at this point we know our window is valid (cost <= maxCost).
    // update maxLen if our current window is longer.
    // end - start + 1 gives the length of the current window.
    maxLen = std::max(maxLen, i - start + 1);
  }

  // return the longest window
  return maxLen;
}