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


## 1732. Find the Highest Altitude

There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.



Example 1:

Input: gain = [-5,1,5,0,-7]  
Output: 1  
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.


Example 2:

Input: gain = [-4,-3,-2,-1,4,3,2]  
Output: 0  
Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.


Constraints:

n == gain.length  
1 <= n <= 100  
-100 <= gain[i] <= 100  