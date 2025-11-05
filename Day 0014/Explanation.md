# 🎯 2094. Finding 3-Digit Even Numbers

[🔗 Problem Link](https://leetcode.com/problems/finding-3-digit-even-numbers/)

## 📝 Problem Description
Given an array of digits, find all unique 3-digit even numbers that can be formed using these digits. The numbers must:
- Be formed by concatenating three digits from the input array
- Not have leading zeros
- Be even numbers

## 💡 Approach
1. Count frequency of each digit in the input array
2. Iterate through all even numbers from 100 to 998
3. For each number:
   - Count frequency of its digits
   - Check if we can form this number using available digits
   - If possible, add to result

## ⏱️ Time Complexity
- O(1) - Constant time as we only check numbers from 100 to 998
- For each number, checking digits takes constant time (3 digits)
- Comparing frequencies takes constant time (10 digits)

## 🧠 Space Complexity
- O(1) - Using fixed size arrays for frequency counting

## 🎯 Solution Steps
1. Create frequency array for input digits
2. Iterate through even numbers (100 to 998)
3. For each number:
   - Count its digit frequencies
   - Compare with input frequencies
   - Add valid numbers to result
4. Return sorted result array

---

## 🎯 Key Points
- Only need to check even numbers
- Must handle duplicate digits correctly
- No leading zeros allowed
- Result must be sorted

## 🚀 Tips
- Use frequency counting to handle duplicates
- Skip numbers with leading zeros
- Only check even numbers to optimize
