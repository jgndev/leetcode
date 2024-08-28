#include "solution.h"

int Solution::num_jewels_in_stones(std::string jewels, std::string stones) {
  std::unordered_set<int> jset(jewels.begin(), jewels.end());

  int total = 0;

  for (auto c : stones) {
    if (jset.count(c) > 0) {
      ++total;
    }
  }

  return total;
}
