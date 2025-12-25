# 🔗 [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

## 📝 Problem Description
Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence. The algorithm must run in O(n) time.

## 🎯 Examples
```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

Input: nums = [1,0,1,2]
Output: 3
```

## ⚠️ Constraints
- 0 <= nums.length <= 10^5
- -10^9 <= nums[i] <= 10^9

## 💡 Solution Approach
The solution uses a HashSet-based approach to achieve O(n) time complexity:

1. First, we store all numbers in a HashSet for O(1) lookups
2. For each number, we check if it's the start of a sequence (i.e., num-1 doesn't exist)
3. If it is a start, we count the length of the sequence by incrementing until we can't find the next number
4. We keep track of the maximum sequence length found

## ⏰ Time and Space Complexity
- Time Complexity: O(n) - We visit each number at most twice
- Space Complexity: O(n) - We store all numbers in a HashSet

## 🔑 Key Insights
- Using a HashSet allows O(1) lookups for checking consecutive numbers
- We only need to start counting sequences from the smallest number in each sequence
- The solution avoids sorting (which would be O(n log n)) by using the HashSet approach
---