# [1295. Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/?envType=daily-question&envId=2025-04-30)

## Problem Description
Given an array of integers, return how many of them contain an even number of digits.

### Example:
**Input**: `[12, 345, 2, 6, 7896]`  
**Output**: `2`  
Explanation: `12` and `7896` have an even number of digits.

---

## Solutions

### C++ Solution
The C++ solution uses a lambda function to check if a number has an even number of digits by converting it to a string and checking its length. The `count_if` function is used to count numbers satisfying this condition.

### Java Solution
The Java solution avoids string conversion by calculating the number of digits using a loop. A helper method is used to determine if the digit count is even, and a `for` loop iterates through the array to count such numbers.