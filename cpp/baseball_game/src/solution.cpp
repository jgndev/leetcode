//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

#include "solution.h"
#include <string>

#include "solution.h"
#include <string>

int Solution::baseball_game(const std::vector<std::string>& operations) {
    std::vector<int> scores;
    scores.reserve(operations.size());

    for (const std::string& op : operations) {
        if (op == "+") {
            if (scores.size() >= 2) {
                int sum = scores[scores.size() - 1] + scores[scores.size() - 2];
                scores.push_back(sum);
            }
        } else if (op == "D") {
            if (!scores.empty()) {
                scores.push_back(2 * scores.back());
            }
        } else if (op == "C") {
            if (!scores.empty()) {
                scores.pop_back();
            }
        } else {
            scores.push_back(std::stoi(op));
        }
    }

    int total = 0;
    for (int score : scores) {
        total += score;
    }

    return total;
}