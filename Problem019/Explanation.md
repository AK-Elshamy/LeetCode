# 383. Ransom Note

[Problem Link](https://leetcode.com/problems/ransom-note/)

## Problem Description
Given two strings `ransomNote` and `magazine`, determine if `ransomNote` can be constructed using letters from `magazine`. Each letter in `magazine` can only be used once.

## Solution Approach
1. Use a hash map to count frequency of characters in both strings
2. For each character in ransomNote, check if magazine has enough occurrences
3. If any character in ransomNote appears more times than in magazine, return false
4. Otherwise, return true

## Time and Space Complexity
- Time Complexity: O(n + m) where n and m are lengths of ransomNote and magazine
- Space Complexity: O(1) since we only store counts for 26 lowercase letters

## Key Points
- We can use a single hash map instead of two by decrementing counts
- The solution works because we only need to check if magazine has enough characters
- Case sensitivity is not an issue as input is guaranteed to be lowercase
---