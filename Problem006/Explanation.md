# 🎯 [1550. Three Consecutive Odds](https://leetcode.com/problems/three-consecutive-odds/)

## 📝 Problem Description
Given an integer array `arr`, we need to check if there are three consecutive odd numbers in the array. Return `true` if such numbers exist, otherwise return `false`.

## 🧠 Approach
1. 🔍 We need to iterate through the array and check for three consecutive odd numbers
2. 📊 An odd number is any number that gives remainder 1 when divided by 2
3. 🔄 We can use a simple loop to check each element and its next two elements
4. ⚡ If we find three consecutive odds, we return true immediately
5. 🏁 If we reach the end without finding three consecutive odds, return false

## ⏰ Time Complexity
- O(n) where n is the length of the array
- We need to scan through the array at most once

## 💾 Space Complexity
- O(1) as we only use a constant amount of extra space

## 🎨 Example Walkthrough
Let's walk through Example 2:
```
Input: arr = [1,2,34,3,4,5,7,23,12]
```

1. Start at index 0: [1,2,34] → Not three consecutive odds
2. Move to index 1: [2,34,3] → Not three consecutive odds
3. Move to index 2: [34,3,4] → Not three consecutive odds
4. Move to index 3: [3,4,5] → Not three consecutive odds
5. Move to index 4: [4,5,7] → Not three consecutive odds
6. Move to index 5: [5,7,23] → Found three consecutive odds! Return true

## 💡 Tips
- Remember that an odd number has remainder 1 when divided by 2
- You can use modulo operator (%) to check if a number is odd
- Be careful with array bounds when checking three consecutive elements 
---