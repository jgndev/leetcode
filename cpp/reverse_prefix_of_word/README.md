# DSA C++ Template

This repo is for quickly setting up a C++ project that uses [CMake](https://cmake.org) and [GoogleTest](https://google.github.io/googletest/).  

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

## 2000. Reverse prefix of word

Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.

For example, if word = "abcdefd" and ch = "d", then you should reverse the segment that starts at 0 and ends at 3 (inclusive). The resulting string will be "dcbaefd".
Return the resulting string.



Example 1:

Input: word = "abcdefd", ch = "d"  
Output: "dcbaefd"  
Explanation: The first occurrence of "d" is at index 3.  
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".  

Example 2:

Input: word = "xyxzxe", ch = "z"  
Output: "zxyxxe"  
Explanation: The first and only occurrence of "z" is at index 3.  
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".  

Example 3:

Input: word = "abcd", ch = "z"  
Output: "abcd"  
Explanation: "z" does not exist in word.  
You should not do any reverse operation, the resulting string is "abcd".  


Constraints:

1 <= word.length <= 250  
word consists of lowercase English letters.  
ch is a lowercase English letter.  