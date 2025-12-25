# 😊 Day 30 - Maximize Happiness of Selected Children

## 🔗 Problem Link

[LeetCode 3075 - Maximize Happiness of Selected Children](https://leetcode.com/problems/maximize-happiness-of-selected-children?envType=daily-question&envId=2025-12-25)

## 📝 Problem Description

Given an array `happiness` representing the happiness values of children, select `k` children to **maximize the total happiness**. Each turn you pick a child, all remaining children's happiness decreases by 1 (minimum 0).

## 💡 Approach

1. **Sort in descending order** using `rsort` - pick happiest children first (greedy)
2. **Iterate k times** - for each pick, subtract the turn index `i` (happiness penalty)
3. **Break early** if `happiness[i] - i <= 0` (no positive contribution)

## ⏱️ Complexity

- **Time:** O(n log n) - sorting dominates
- **Space:** O(1) - in-place sorting

## 📌 Example

```
happiness = [1, 2, 3], k = 2
Sorted = [3, 2, 1]
Turn 0: 3 - 0 = 3
Turn 1: 2 - 1 = 1
Answer = 4
```
