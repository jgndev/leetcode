#pragma once

#include <string>

class Solution {
 private:
  void reverseWord(std::string &s, size_t start, size_t end);

 public:
  std::string reverseWords(std::string s);
};