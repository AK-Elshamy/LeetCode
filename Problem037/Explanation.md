# [2962. Count Subarrays Where Max Element Appears at Least K Times](https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/?envType=daily-question&envId=2025-04-29)

## Problem Description

Given an array `A` of integers and an integer `k`, count the number of subarrays where the maximum element appears at least `k` times.

---

## Solution Explanation

### Approach: Sliding Window

The solution uses a sliding window technique to efficiently count the subarrays that satisfy the condition.

### Steps:

1. **Find the Maximum Element**:
   - Identify the maximum element `mx` in the array.

2. **Sliding Window**:
   - Use two pointers (`left` and `right`) to define a window.
   - Keep track of how many times the maximum element appears in the current window.

3. **Count Valid Subarrays**:
   - For each position of the `right` pointer, calculate the number of valid subarrays ending at `right`.

4. **Shrink the Window**:
   - If the count of the maximum element in the window is greater than or equal to `k`, move the `left` pointer to shrink the window.

5. **Return the Result**:
   - The total count of valid subarrays is stored in `ans`.

---

## Complexity Analysis

- **Time Complexity**: `O(n)`  
  The array is traversed once using the sliding window technique.

- **Space Complexity**: `O(1)`  
  Only a few variables are used for computation.

---