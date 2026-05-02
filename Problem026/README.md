# Day 31 - Minimum Penalty for a Shop

## Problem
[LeetCode 2483 - Minimum Penalty for a Shop](https://leetcode.com/problems/minimum-penalty-for-a-shop?envType=daily-question&envId=2025-12-26)

## Solutions

### Solution 1: Prefix Sum Approach
- Build prefix arrays for 'N' and 'Y' counts
- Calculate penalty for each closing time
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution 2: Optimized Single Pass
- Count total 'Y' first, then iterate once
- Track running counts of 'N' (before) and 'Y' (after)
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)