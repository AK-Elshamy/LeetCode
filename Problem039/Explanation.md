# 🎲 [1007: Minimum Domino Rotations For Equal Row](https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/?envType=daily-question&envId=2025-05-03) 🎲

## 🚀 Faster and Intelligent | ⏱️ O(n) Time | 🔥 Greedy Fire On! 🔥

## 🧩 The Problem
In a mesmerizing row of dominoes, `tops[i]` and `bottoms[i]` represent the top and bottom halves of the `ith` domino. We can magically rotate any domino to swap its values! Our mission: find the minimum number of rotations to make all tops identical OR all bottoms identical. If this magical transformation is impossible, return -1.

## ✨ Brilliant Solution Summary ✨
The *eureka* moment comes when you realize that if a solution exists, all dominoes must have at least one side containing either the top or bottom value from the first domino. It's like finding the secret key that unlocks the entire puzzle! 🔑

### 🧠 Clever Approach
1. 🎯 Target the top and bottom values from the first domino as our only viable candidates
2. 🔍 Investigate if either candidate can be present in every position (top OR bottom)
3. 🧮 For each valid candidate, calculate the minimum rotations using our genius formula: `n - max(count_in_top, count_in_bottom)`
4. 🎉 Return the minimum rotations, or -1 if our magical transformation is impossible

### ⚡ Complexity - Lightning Fast! ⚡
- ⏱️ **Time**: O(n) - zooming through the arrays in just 4 passes!
- 🧠 **Space**: O(1) - using barely any extra memory regardless of input size!

## 🎮 Example Showcase
For input: `tops = [2,1,2,4,2,2], bottoms = [5,2,6,2,3,2]`
- 🎲 First domino shows 2 (top) and 5 (bottom)
- 🔍 Value 2 can appear in every position (either top or bottom) - perfect!
- 🧮 2 appears 4 times in tops, 3 times in bottoms
- ✨ Minimum rotations = 6 - max(4,3) = 2 magical flips!

For input: `tops = [3,5,1,2,3], bottoms = [3,6,3,3,4]`
- 🎲 First domino shows 3 (top) and 3 (bottom)
- 🔍 Neither value can be made to appear everywhere
- 💔 Return -1 (mission impossible)

## 💡 Why This Works Brilliantly
The greedy approach works because we're intelligently identifying the only possible candidates (from the first domino) and then finding the minimum number of rotations needed. It's like solving a puzzle with exactly one or two possible solutions! Pure algorithmic elegance! 🧠✨

## 🌟 Key Insights
- Only the values in the first domino can potentially be the solution
- We need to verify that one of these values can be present in every position
- Finding the minimum rotations involves maximizing the number of positions that already have the target value in the desired row
- This solution is beautiful in its simplicity - we're making multiple efficient passes through the data to arrive at the optimal answer