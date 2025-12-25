# [String Transformation Problem 🔄](https://leetcode.com/problems/string-transformation/)

## Problem Description 📝
Given a string `s` and an integer `t`, we need to perform `t` transformations on the string where:
- Each letter shifts to the next letter in the alphabet
- When 'z' is encountered, it transforms into "ab"

## Intuition 💡
The key insight is that we don't need to build actual strings! We can efficiently solve this by:
- Tracking character frequencies 📊
- Monitoring how string length changes (only 'z' → "ab" affects length) 📏

## Approach 🚀
1. **Frequency Counting** 📈
   - Create an array to count occurrences of each letter
   - Initialize with the input string's character frequencies

2. **Transformation Process** ⚡
   - For each transformation:
     - Add number of 'z's to length (each 'z' adds 1 character)
     - Shift frequencies (each letter becomes next letter)
     - Handle 'z' → "ab" special case

## Time and Space Complexity ⏱️
- **Time Complexity**: O(t) - We process 26 letters t times
- **Space Complexity**: O(1) - Fixed size array of 26 elements

## Example Walkthrough 🔍
For s = "abcyy", t = 2:

1. **Initial State** 📌
   - freq = [1,1,1,0,...,0,2,0]
   - len = 5

2. **First Transformation** 🔄
   - z_count = 0
   - Shift: freq = [0,1,1,1,0,...,0,2]
   - Result: "bcdzz" (len = 5)

3. **Second Transformation** 🔄
   - z_count = 2
   - len = 5 + 2 = 7
   - Shift: freq = [2,0,1,1,1,0,...,0]
   - Add z_count to freq[1]: freq[1] = 2
   - Final string: "cdeabab" (len = 7)

## Key Points ✨
- Use modulo 10^9 + 7 for large numbers
- Process frequencies from back to front to avoid overwriting
- Special handling for 'z' → "ab" transformation

## Solution Implementations 💻
- [Java Solution](Solution.java)
- [C++ Solution](Solution.cpp) 