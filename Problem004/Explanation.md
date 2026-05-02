# 1464. Maximum Product of Two Elements in an Array 🔢 ✖️

[🔗 Problem Link](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array)

## Quick Summary 🎯
- **Problem**: Find max value of `(nums[i]-1)*(nums[j]-1)` for different indices i and j
- **Key Insight**: Need the two largest numbers in array
- **Solution**: Single pass to track two largest numbers
- **Complexity**: O(n) time, O(1) space
- **Example**: For [3,4,5,2] → (5-1)*(4-1) = 12

## Detailed Summary 📝
This problem asks us to find the maximum product of two elements in an array after subtracting 1 from each element. The solution involves finding the two largest numbers in the array and calculating their product after subtracting 1 from each. The optimal solution can be achieved in O(n) time with O(1) space complexity.

## Problem Description 📋
Given an array of integers `nums`, we need to find the maximum value of `(nums[i]-1)*(nums[j]-1)` where `i` and `j` are different indices.

## Solution Approach 💡
The key insight is that to maximize the product `(nums[i]-1)*(nums[j]-1)`, we need to find the two largest numbers in the array. This is because:
1. The product will be maximized when both numbers are as large as possible
2. After subtracting 1 from each number, we want the largest possible numbers to multiply

### Algorithm Steps: 📊
1. Find the two largest numbers in the array
2. Subtract 1 from each number
3. Return their product

### Time and Space Complexity: ⏱️
- Time Complexity: O(n) where n is the length of the array
- Space Complexity: O(1) as we only use two variables to track the largest numbers

### Example Walkthrough: 🚶‍♂️
For input `nums = [3,4,5,2]`:
1. First largest number = 5
2. Second largest number = 4
3. (5-1) * (4-1) = 4 * 3 = 12

## Implementation Notes 📝
- We can find the two largest numbers in a single pass through the array
- We maintain two variables to track the largest and second largest numbers
- When we find a number larger than our current largest, we update both variables appropriately
