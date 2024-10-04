#include "solution.h"

// return the maximum of two integers
int max(int a, int b) {
  return (a > b) ? a : b;
}

// return the absolute value of an integer
int abs(int x) {
  return (x < 0) ? -x : x;
}

int equalSubstring(char *s, char *t, int maxCost) {
  // get the length of s once
  int n = (int)strlen(s);

  // maxLen: keep track of the maximum length of valid substring found so far.
  // start: the start index of the current window.
  // currCost: the current cost of operations in the window.
  int maxLen = 0, start = 0, currCost = 0;

  for (int end = 0; end < n; ++end) {
    // calculate the cost to change character in s to character in t.
    int cost = abs(s[end] - t[end]);
    // add this cost to the running total.
    currCost += cost;

    // if the current cost exceeds the budget maxCost we need to shrink the window.
    while (currCost > maxCost) {
      // remove the leftmost character in the window.
      currCost -= abs(s[start] - t[start]);
      // move the start of the window one step to the right.
      ++start;
    }

    // window is valid (cost <= maxCost), update maxLen.
    maxLen = max(maxLen, end - start + 1);
  }

  return maxLen;
}
