# Plus One

## Problem Link

[LeetCode 66 - Plus One](https://leetcode.com/problems/plus-one)

## Problem Description

Given a large integer represented as an array of digits, increment the integer by one and return the resulting array.

## Approach

1. Start from the last digit and check if it's less than 9
2. If yes, simply increment and return
3. If digit is 9, set it to 0 and move to the next digit
4. Repeat until a non-9 digit is found or all digits are processed
5. If all digits were 9 (e.g., 999), create a new array with leading 1

## Complexity

- **Time:** O(n)
- **Space:** O(n) worst case (when all digits are 9)
