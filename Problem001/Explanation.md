## [🔢 1399. Count Largest Group ](https://leetcode.com/problems/count-largest-group/?envType=daily-question&envId=2025-04-23)

---

### 🧠 Simple Idea:
You are given a number `n`.  
Each number from `1` to `n` goes into a group based on the **sum of its digits**.

Example:
- 13 → 1 + 3 = 4 → goes to group 4
- 10 → 1 + 0 = 1 → goes to group 1

At the end, return how many groups have the **largest size**.

---

### 📦 Steps:
1. Loop through numbers from `1` to `n`.
2. Calculate the digit sum for each number.
3. Use a map to count how many numbers are in each group.
4. Find the largest group size.
5. Count how many groups have that size.

---

### 🧪 Examples:

#### ✅ Example 1:
```txt
Input: n = 13
Output: 4
