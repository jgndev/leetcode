#include "solution.h"

int Solution::number_of_steps(int num) {
  if (num == 0) {
    return 0;
  }

  int steps = 0;

  while (num > 1) {
    // bitwise AND to check if a number is even or odd.
    // if odd, we need two steps - subtract by 1 and division by 2.
    // if even, we need one step - division by 2.
    steps += (num & 1) ? 2 : 1;
    // bitshift right for division by 2.
    num >>= 1;
  }

  // return the steps so far plus one more to go from 1 to 0.
  return steps + 1;
}
