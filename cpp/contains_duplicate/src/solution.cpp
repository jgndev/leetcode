#include "solution.h"

bool Solution::containsDuplicate(std::vector<int> &nums) {
  std::unordered_set<int> seen;

  for (int num: nums) {
    if (seen.count(num)) {
      return true;
    }

    seen.insert(num);
  }

  return false;
}