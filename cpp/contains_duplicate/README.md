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

## 217. Contains Duplicate

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.



Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true



Constraints:

1 <= nums.length <= 105  
-109 <= nums[i] <= 109