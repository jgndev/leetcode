#include "solution.h"

int Solution::getCommon(std::vector<int> &nums1, std::vector<int> &nums2) {
  // initialize two pointers, one for each vector
  int i = 0, j = 0;
  // store the lengths of the vectors once
  size_t n1 = nums1.size(), n2 = nums2.size();

  // continue the loop until we reach the end of either vector
  while (i < n1 && j < n2) {
    // case 1: common element found
    if (nums1[i] == nums2[j]) {
      // guaranteed to be the minimum common value because the vectors
      // are sorted, and we are starting from the beginning.
      return nums1[i];
      // case 2: the current element of nums1 is smaller.
    } else if (nums1[i] < nums2[j]) {
      // move the nums1 pointer forward.
      ++i;
    } else {
      // case 3: the current element of nums2 is smaller.
      // move the nums2 pointer forward.
      ++j;
    }
  }


  // reached the end without finding a common value, return -1
  // per the problem description.
  return -1;
}