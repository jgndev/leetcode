#include "solution.h"

std::string Solution::reverseOnlyLetters(std::string s) {
  size_t left = 0, right = s.size() - 1;

  while (left < right) {
    while (left < right && !std::isalpha(s[left])) {
      ++left;
    }

    while (right > left && !std::isalpha(s[right])) {
      --right;
    }

    if (left < right) {
      std::swap(s[left], s[right]);
      ++left;
      --right;
    }
  }

  return s;
}