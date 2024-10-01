#include "solution.h"

bool is_vowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int max_vowels(char *s, int k) {
  int count = 0, max_count = 0;
  int n = (int)strlen(s);

  // count the vowels in the first window
  for (int i = 0; i < k && i < n; ++i) {
    if (is_vowel(s[i])) {
      ++count;
    }
  }

  // max_count for the first window
  max_count = count;

  // slide the window
  for (int i = k; i < n; ++i) {
    // add new characters as the window moves
    if (is_vowel(s[i])) {
      ++count;
    }

    // remove character counts as they leave the window
    if (is_vowel(s[i - k])) {
      --count;
    }

    // update max_count to the new max
    if (count > max_count) {
      max_count = count;
    }
  }

  return max_count;
}
