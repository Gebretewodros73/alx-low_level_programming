# 0x1E-search_algorithms

This directory contains solutions to various search algorithm problems. Each task is implemented in a separate file and accompanied by a main program for testing.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Tasks](#Tasks)
- 

## Introduction

The "0x1E-search_algorithms" repository is a collection of algorithms implemented in C for searching values in arrays and linked lists. It provides various search algorithms such as linear search, binary search, jump search, interpolation search, exponential search, and advanced search techniques like jump search in a singly linked list and linear search in a skip list.

The algorithms are implemented as functions with specific prototypes and follow the rules and requirements provided in each task description. They are designed to efficiently search for a value in sorted or unsorted arrays and linked lists, returning the index or node where the value is found.

## Features

The "The "0x1E-search_algorithms" repository offers the following features:

1. `Linear search:` Implements the linear search algorithm to find a value in an array of integers. The function iterates through the array, comparing each element with the target value until a match is found or the end of the array is reached.

2. `Binary search:` Implements the binary search algorithm to find a value in a sorted array of integers. The function repeatedly divides the array into halves and compares the middle element with the target value until a match is found or the subarray becomes empty.

3. `Big O analysis:` Includes files that explain the time and space complexities of different search algorithms. It covers linear search, iterative linear search, binary search, and other advanced techniques.

4. `Jump search:` Implements the jump search algorithm to find a value in a sorted array of integers. The function uses a fixed step size (square root of the array size) to jump ahead in the array and then performs linear search within the identified block.

5. `Exponential search:` Implements the exponential search algorithm to find a value in a sorted array of integers. The function exponentially increases the range by doubling until the target value is within the range. Then, it performs binary search within that range.

6. `Interpolation search:` Implements the interpolation search algorithm to find a value in a sorted array of integers. The function uses interpolation formula to calculate the probable position of the target value within the array and adjusts the range accordingly. It then performs linear search within that range.

7. `Advanced binary search:` Implements an advanced binary search algorithm to find the first occurrence of a value in a sorted array of integers. The function uses recursion and performs binary search while keeping track of the first occurrence index.

8. `Jump search in a singly linked list:` Implements the jump search algorithm to find a value in a sorted singly linked list of integers. The function uses an express lane approach, where nodes are placed at regular intervals, and jumps ahead to quickly narrow down the search range.

9. `Linear search in a skip list:` Implements the linear search algorithm to find a value in a sorted skip list of integers. The skip list has an "express lane" that allows for faster traversal. The function follows the express lane to quickly approach the target value and then performs linear search within the identified block.

These algorithms provide efficient ways to search for values in arrays and linked lists, taking advantage of the properties of the data structures and minimizing the number of comparisons required.

## Tasks

0. `0-main.c` and `0-linear.c`: These files are associated with the task of implementing the linear search algorithm. You would need to write the code for the linear search function in [0-linear.c](./0-linear.c) to perform a linear search on an array. You can test your implementation by compiling and running [0-main.c](./test/0-main.c).

1. `1-main.c` and `1-binary.c`: These files are related to the task of implementing the binary search algorithm. You should write the binary search function in [1-binary.c](./1-binary.c), which performs a binary search on a sorted array. Use [1-main.c](./test/1-main.c) to compile and run your code for testing.

2. [2-O](./2-O), [3-O](./3-O), [4-O](./4-O), [5-O](./5-O), [6-O](./6-O), [101-O](./101-O), [102-O](./102-O), [103-O](./103-O), [104-O](./104-O), [105-O](./105-0), [106-O](./106-O), [107-O](./107-O), [108-O](./108-O): These files are associated with the Big O analysis task. Each file contains the time complexity and space complexity analysis of different search algorithms. You need to provide the correct big O notation for each algorithm in the respective files.

3. `100-jump.c`: These files are for the task of implementing the jump search algorithm. Implement the jump search function in [100-jump.c](./100-jump.c), which performs a jump search on a sorted array. Compile and run [100-main.c](./test/100-main.c) to test your code.

4. `102-main.c` and `102-interpolation.c`: These files are related to the task of implementing the interpolation search algorithm. Write the code for the interpolation search function in [102-interpolation.c](./102-interpolation.c) to perform an interpolation search on a sorted array. Use [102-main.c](./test/102-main.c)for testing your implementation.

5. `103-main.c` and `103-exponential.c`: These files are associated with the task of implementing the exponential search algorithm. Implement the exponential search function in [103-exponential.c](./103-exponential.c), which performs an exponential search on a sorted array. Compile and run [103-main.c](./test/103-main.c) to test your code.

6. `104-main.c` and `104-advanced_binary.c`: These files are for the task of implementing the advanced binary search algorithm. Write the code for the advanced binary search function in [104-advanced_binary.c](./104-advanced_binary.c), which finds the first occurrence of a value in a sorted array. Use [104-main.c](./test/104-main.c) to compile and test your code.

7. `105-main.c` and `105-jump_list.c`: These files are related to the task of implementing the jump search algorithm in a singly linked list. Implement the jump search function in [105-jump_list.c](./105-jump_list.c), which performs a jump search on a sorted singly linked list. Compile and run [105-main.c](./test/105-main.c) to test your implementation.

8. `106-main.c` and `106-linear_skip.c`: These files are associated with the task of implementing the linear search algorithm in a skip list. Implement the linear search function in [106-linear_skip.c](./106-linear_skip.c), which performs a linear search on a skip list. Use [106-main.c](./test/106-main.c) for testing your code.

Make sure to read the instructions provided in each file and follow any additional guidelines given in the task descriptions. Compile and run the corresponding main.c files to test your implementations.
