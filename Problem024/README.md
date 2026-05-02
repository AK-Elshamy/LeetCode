# 🍎 Day 29 - Apple Redistribution into Boxes

## 🔗 Problem Link

[LeetCode 3074 - Apple Redistribution into Boxes](https://leetcode.com/problems/apple-redistribution-into-boxes/description/)

## 📝 Problem Description

Given an array `apple` where `apple[i]` represents the number of apples in pack `i`, and an array `capacity` where `capacity[j]` represents the capacity of box `j`, find the **minimum number of boxes** 📦 needed to redistribute all the apples.

## 💡 Approach

1. **Calculate total apples** using `accumulate`
2. **Sort capacities in descending order** - use largest boxes first (greedy)
3. **Build prefix sum** of sorted capacities
4. **Binary search** using `lower_bound` to find minimum boxes needed

## ⏱️ Complexity

- **Time:** O(n log n) - sorting dominates
- **Space:** O(1) - in-place sorting

## 📌 Example

```
apple = [1, 3, 2], capacity = [4, 3, 1, 5, 2]
Total apples = 6
Sorted capacity = [5, 4, 3, 2, 1]
Prefix sum = [5, 9, 12, 14, 15]
Answer = 2 boxes (5 + 4 = 9 >= 6)
```
