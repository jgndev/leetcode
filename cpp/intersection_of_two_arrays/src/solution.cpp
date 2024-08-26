#include "solution.h"

vector<int> Solution::intersection(vector<int> &nums1, vector<int> &nums2) {
  unordered_set<int> num_set(nums1.begin(), nums1.end());
  unordered_set<int> result_set;

  for (int num : nums2) {
    if (num_set.count(num) > 0) {
      result_set.insert(num);
    }
  }

  return vector<int>(result_set.begin(), result_set.end());
}
