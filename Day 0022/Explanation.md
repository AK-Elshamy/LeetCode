# 🎯 Zero Array Transformation I

## 🔗 Problem Link
[LeetCode 3355 - Zero Array Transformation I](https://leetcode.com/problems/zero-array-transformation-i/)

## 📝 Problem Description
You are given an integer array `nums` of length `n` and a 2D array `queries`, where `queries[i] = [li, ri]`. For each query, you can select a subset of indices within the range `[li, ri]` and decrement their values by 1. The goal is to determine if it's possible to transform `nums` into a Zero Array (all elements equal to 0) after processing all queries sequentially.

## 💡 Solution Approach
The solution uses a clever prefix sum technique to efficiently track the number of operations that can be performed on each index:

1. **Prefix Sum Array**: We create an array to track the number of operations that can be performed on each index.
2. **Query Processing**: For each query `[l, r]`, we mark the start and end of the range:
   - Increment at index `l` (start of range)
   - Decrement at index `r+1` (end of range)
3. **Validation**: We check if the cumulative operations at each index are sufficient to reduce the original value to zero.

## ⚡ Time and Space Complexity
- Time Complexity: O(n + q), where n is the length of nums and q is the number of queries
- Space Complexity: O(n) for storing the prefix sum array

## 🎯 Key Insights
1. The problem can be reduced to checking if each element can be reduced to zero
2. We only need to track the number of operations possible at each index
3. The prefix sum technique efficiently handles range updates

## 📊 Example Walkthrough
For nums = [1,0,1], queries = [[0,2]]:
1. Create prefix sum array: [0,0,0,0]
2. Process query [0,2]:
   - Increment at index 0: [1,0,0,0]
   - Decrement at index 3: [1,0,0,-1]
3. Calculate cumulative sum: [1,1,1]
4. Compare with original array: [1,0,1]
   - All elements can be reduced to zero
   - Return true

## 🚀 Optimizations
1. Early termination if any element can't be reduced to zero
2. Efficient range updates using prefix sum technique
3. Single pass through the array for validation

## 💻 Code
- [C++ Solution](Solution.cpp)
- [Java Solution](Solution.java)
---
