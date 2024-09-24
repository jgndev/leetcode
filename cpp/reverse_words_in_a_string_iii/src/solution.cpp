#include "solution.h"

void Solution::reverseWord(std::string &s, size_t start, size_t end) {
  while (start < end) {
    std::swap(s[start++], s[end--]);
  }
}

std::string Solution::reverseWords(std::string s) {
  size_t lastSpaceIndex = -1;
  size_t n = s.size();

  for (size_t i = 0; i <= n; ++i) {
    if (i == n || s[i] == ' ') {
      size_t start = lastSpaceIndex + 1;
      size_t end = i - 1;

      reverseWord(s, start, end);

      lastSpaceIndex = i;
    }
  }

  return s;
}