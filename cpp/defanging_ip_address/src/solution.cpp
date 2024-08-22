//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

std::string Solution::defang_ip_address(std::string& address) {
    // new empty std::string for creating the result
    std::string result;
    // we will be adding 6 brackets for the [] surrounding each dot
    result.reserve(address.size() + 6);

    for (char c : address) {
        // if the character is a dot
        if (c == '.') {
            // append [.] to result
            result += "[.]";
        } else {
            result += c;
        }
    }

    return result;
}
