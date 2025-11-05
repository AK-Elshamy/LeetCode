# 🎨 Day 19: Sort Colors

## 📝 Problem
[LeetCode 75. Sort Colors](https://leetcode.com/problems/sort-colors/)

Given an array `nums` with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

## 🎯 Solutions

### Solution 1: Three Pointers (Dutch National Flag Algorithm) 🚩
- Time Complexity: O(n)
- Space Complexity: O(1)
- Uses three pointers (low, mid, high) to partition the array
- One-pass solution

### Solution 2: Counting Sort 🔢
- Time Complexity: O(n)
- Space Complexity: O(1)
- Counts occurrences of 1s and 2s
- Two-pass solution

## 📚 Implementation
- [Solution.java](Solution.java) - Java implementation using three pointers
- [Solution_1.cpp](Solution_1.cpp) - C++ implementation using three pointers
- [Solution_2.cpp](Solution_2.cpp) - C++ implementation using counting approach

## 🎨 Example
```
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
```

## ⚠️ Constraints
- n == nums.length
- 1 <= n <= 300
- nums[i] is either 0, 1, or 2 