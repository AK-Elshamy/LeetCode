# 2942. Find Words Containing Character 🔍

## Problem Link
[LeetCode - Find Words Containing Character](https://leetcode.com/problems/find-words-containing-character/)

## Problem Description 📝
Given a 0-indexed array of strings `words` and a character `x`, we need to return an array of indices representing the words that contain the character `x`. The returned array can be in any order.

## Solution Approach 🛠️
1. **Iterative Search**: We iterate through each word in the array
2. **Character Check**: For each word, we check if it contains the target character
3. **Index Collection**: If the character is found, we add the word's index to our result list

## Time and Space Complexity ⏱️
- **Time Complexity**: O(n * m) where n is the number of words and m is the average length of words
- **Space Complexity**: O(k) where k is the number of words containing the target character

## Key Points 💡
- The solution uses a simple linear search approach
- We can use built-in string methods for character checking
- The order of indices in the result doesn't matter
- The solution handles edge cases like empty arrays and no matches

## Example Walkthrough 🚶‍♂️
For input: `words = ["leet","code"], x = "e"`
1. Check "leet" → contains 'e' → add index 0
2. Check "code" → contains 'e' → add index 1
3. Result: [0,1] 