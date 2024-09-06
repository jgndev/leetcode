#include "solution.h"

int Solution::maximum_wealth(std::vector<std::vector<int>> &accounts) {
  int max_wealth = 0;

  for (const auto &account : accounts) {
    int customer_wealth = 0;
    for (const auto &balance : account) {
      customer_wealth += balance;
    }

    max_wealth = std::max(max_wealth, customer_wealth);
  }

  return max_wealth;
}
