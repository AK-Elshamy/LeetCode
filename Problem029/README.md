# 961. N-Repeated Element in Size 2N Array

## [Problem link](https://leetcode.com/problems/n-repeated-element-in-size-2n-array)

---

## Problem

You are given an integer array `nums` with `2n` elements. There are `n + 1` unique elements, and exactly one element is repeated `n` times. Return the element that is repeated `n` times.

## Approach

Use a HashSet to track seen elements. Since `HashSet.add()` returns `false` if the element already exists, the first duplicate we encounter is the answer.

## Complexity

- **Time:** O(n)
- **Space:** O(n)
