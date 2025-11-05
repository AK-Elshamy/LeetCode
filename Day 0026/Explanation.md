# 9. Palindrome Number

[LeetCode Problem Link](https://leetcode.com/problems/palindrome-number/)

## Summary
This problem asks us to determine if a given integer is a palindrome. A number is a palindrome if it reads the same forward and backward. The optimal solution uses a half-reversal approach, where we only reverse half of the digits and compare it with the remaining half. This approach is both time and space efficient, with O(log n) time complexity and O(1) space complexity.

Key points:
- Negative numbers are not palindromes
- Numbers ending with 0 (except 0) are not palindromes
- Single-digit numbers are always palindromes
- The solution avoids string conversion for better space efficiency

## Problem Description
Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

An integer is a palindrome when it reads the same forward and backward.

## Examples

### Example 1:
```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
```

### Example 2:
```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

### Example 3:
```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```

## Constraints
- -2^31 <= x <= 2^31 - 1

## Solution Approach

### Method 1: Half Reversal (Optimal)
Instead of reversing the entire number, we can optimize by only reversing half of the digits:

1. **Edge Cases**:
   - Negative numbers are not palindromes
   - Numbers ending with 0 (except 0 itself) are not palindromes
   - Single-digit numbers are always palindromes

2. **Algorithm**:
   - Reverse only the second half of the number
   - Compare the first half with the reversed second half
   - For even length numbers (e.g., 1221): compare x with reversedHalf
   - For odd length numbers (e.g., 12321): compare x with reversedHalf/10

### Time and Space Complexity
- Time Complexity: O(log n) - We only process half of the digits
- Space Complexity: O(1) - We use constant extra space

## Alternative Approaches
1. **String Conversion**:
   - Convert number to string and check palindrome
   - Time Complexity: O(log n)
   - Space Complexity: O(log n)
   - Not recommended due to extra space usage

2. **Full Reversal**:
   - Reverse the entire number and compare
   - Time Complexity: O(log n)
   - Space Complexity: O(1)
   - Less efficient than half reversal method

## Follow-up
The solution avoids converting the integer to a string, making it more efficient in terms of space complexity.
---