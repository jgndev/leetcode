# DSA C++ Template

This repo is for quickly setting up a C++ project that uses [CMake](https://cmake.org)
and [GoogleTest](https://google.github.io/googletest/).

It is intended for practice with the C++ language while doing Data Structures and  
Algorithms problems like those found on [leetcode.com](https://leetcode.com)

## Instructions

1 - Clone the repo to a directory name of your choice.

```bash
git clone https://github.com/jgndev/dsa_cpp_templ example_problem
```

2 - Run the project init script `project-init.sh`

```bash
./project-init.sh
```

This creates a `build` directory and links `compile-commands.json` to the top level which
helps LSPs work in editors like [neovim](https://neovim.io).

## Building

1 - Change directory into `build`

2 - Run `make`

## Running tests

1 - Add your tests to `tests/test_solution.cpp`

2 - Change directory to `build`

3 - Run `make` to compile `test_solution`

4 - Run `./test_solution` to run the tests.

## 1208. Get Equal Substrings Within Budget

You are given two strings s and t of the same length and an integer maxCost.

You want to change s to t. Changing the ith character of s to ith character of t costs
|s[i] - t[i]| (i.e., the absolute difference between the ASCII values of the characters).

Return the maximum length of a substring of s that can be changed to be the same as the
corresponding substring of t with a cost less than or equal to maxCost. If there is no substring from s that can be
changed to its corresponding substring from t, return 0.

Example 1:

Input: s = "abcd", t = "bcdf", maxCost = 3  
Output: 3  
Explanation: "abc" of s can change to "bcd".  
That costs 3, so the maximum length is 3.

Example 2:

Input: s = "abcd", t = "cdef", maxCost = 3  
Output: 1  
Explanation: Each character in s costs 2 to change to character in t, so the maximum length is 1.

Example 3:

Input: s = "abcd", t = "acde", maxCost = 0  
Output: 1  
Explanation: You cannot make any change, so the maximum length is 1.

Constraints:

1 <= s.length <= 105  
t.length == s.length  
0 <= maxCost <= 106  