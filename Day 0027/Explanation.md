# 🎯 2894. Divisible and Non-divisible Sums Difference

[🔗 Problem Link](https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/)

## 📝 Problem Description
Given two positive integers `n` and `m`, we need to:
- Calculate sum of numbers in range [1, n] that are NOT divisible by m (num1)
- Calculate sum of numbers in range [1, n] that ARE divisible by m (num2)
- Return num1 - num2

## 💡 Solution Approach
The solution uses a mathematical approach:
1. Calculate sum of numbers divisible by m using arithmetic progression
2. Calculate total sum of numbers from 1 to n using formula: n(n+1)/2
3. Subtract divisible sum from total to get non-divisible sum
4. Return the difference between non-divisible and divisible sums

### ⚡ Time Complexity: O(n/m)
### 💾 Space Complexity: O(1)

## 🧪 Example Walkthrough
For n = 10, m = 3:
- Divisible by 3: [3,6,9] → sum = 18
- Not divisible by 3: [1,2,4,5,7,8,10] → sum = 37
- Result = 37 - 18 = 19

## ⚠️ Constraints
- 1 <= n, m <= 1000