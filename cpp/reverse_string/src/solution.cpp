#include "solution.h"

void Solution::reverse_string(std::vector<char> &s) {
  int left = 0;
  int right = static_cast<int>(s.size()) - 1;

  while (left < right) {
    auto temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    ++left;
    --right;
  }
}