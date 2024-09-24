#include "solution.h"

void reverseSubstring(char *start, char *end) {
  while (start < end) {
    // take a temporary copy of the character pointed at by *start.
    char temp = *start;

    // assign *end to *start, swapping the characters in those positions.
    *start = *end;
    // increment character pointed at by *start;
    ++start;

    // assign temp to *end, swapping the characters in those positions.
    *end = temp;
    // decrement character pointed to by *end;
    --end;
  }
}

char* reverseWords(char *s) {
  // get the length of s once.
  int n = (int)strlen(s);
  // *start wil begin at the beginning of the string.
  char *start = s;

  for (int i = 0; i <= n; ++i) {
    // if the character at i is not a space or a null byte.
    if (s[i] == ' ' || s[i] == '\0') {
      // pass the start and end positions of the substring
      // to the reverseSubstring function to reverse in place.
      reverseSubstring(start, &s[i - 1]);
      // move start up to i + 1.
      start = &s[i + 1];
    }
  }

  // return the modified string
  return s;
}

