#include "solution.h"

std::string Solution::reversePrefix(std::string word, char ch) {
  int left = 0, right = 0;
  int n = static_cast<int>(word.length());

  // iterate through word looking for ch at the right pointer
  while (right < n) {
    if (word[right] == ch) {
      // found ch, start swapping
      while (left < right) {
        // swap the characters at the left and right positions
        std::swap(word[left], word[right]);
        ++left;
        --right;
      }

      // swap has already happened, return the updated word
      return word;
    }

    // haven't found ch yet, keep moving right forward
    ++right;
  }

  // never found ch, return word unchanged.
  return word;
}