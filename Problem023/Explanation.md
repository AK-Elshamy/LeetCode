# [Count Subarrays of Length Three With a Condition](https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/?envType=daily-question&envId=2025-04-27)

---

## Problem Description

You are given an integer array `nums`. The task is to count the number of subarrays of length 3 such that:

- The sum of the **first** and **third** numbers equals **exactly half** of the **second** number.

---

### Example 1:
**Input:**  
`nums = [1, 2, 1, 4, 1]`  

**Output:**  
`1`  

**Explanation:**  
The only valid subarray is `[1, 4, 1]`, where:  
`2 * (1 + 1) == 4`.

---

### Example 2:
**Input:**  
`nums = [1, 1, 1]`  

**Output:**  
`0`  

**Explanation:**  
The only subarray `[1, 1, 1]` does not satisfy the condition.

---

### Constraints:
- `3 <= nums.length <= 100`
- `-100 <= nums[i] <= 100`

---

## Approach to Solve the Problem

To solve this problem, we iterate through the array and check every subarray of length 3. For each subarray, we verify if the condition `2 * (first + last) == mid` holds true. If it does, we increment the count.

---

## Complexity Analysis

- **Time Complexity:**  
  `O(n)` → We iterate through the array once, checking each subarray of length 3.

- **Space Complexity:**  
  `O(1)` → No additional space is used.
