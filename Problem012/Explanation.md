# [🔢 2799. Count Complete Subarrays in an Array 🔗](https://leetcode.com/problems/count-complete-subarrays-in-an-array/?envType=daily-question&envId=2025-04-24)

---

## 🧠 Problem Summary:
We are given an array `nums`.  
A **complete subarray** is a subarray that contains **all the distinct elements** found in the full array.

Our goal is to **count** how many complete subarrays exist.

---

## ✍️ Step-by-Step Tutorial Solution:

### 🔹 Step 1: Understand the Problem
You are given an array `nums`.  
You must find all subarrays (contiguous parts of the array) that contain **all the unique numbers** that exist in the whole array.

---

### 🔹 Step 2: Count the Distinct Elements
To determine what makes a subarray "complete," we first need to count how many **distinct numbers** are in `nums`.

🧠 **Example:**  
If `nums = [1, 3, 1, 2, 2]`,  
the distinct numbers are `{1, 2, 3}` → there are **3** distinct numbers.

---

### 🔹 Step 3: Sliding Window Technique
To efficiently find all subarrays that contain **exactly the distinct numbers**, we use the **sliding window technique**.

#### Key Idea:
1. Move the right pointer `r` to expand the window.
2. Use a frequency counter to track how many different numbers are inside the window.
3. Once the window contains all the distinct elements → we found a complete subarray!
4. Count all possible subarrays that **start from the left `l`** and **end anywhere from `r` to the end**.

---

### 🔹 Step 4: Shrink the Window from the Left
After finding a valid window, try to shrink it from the left side (move `l`) while it still contains all the distinct numbers.

This helps us:
- Find **all possible valid windows**.
- Avoid unnecessary computations.

---

### 🔹 Step 5: Count All Valid Subarrays
Every time the window is "complete,"  
we can say:  
**There are `(n - r)` valid subarrays starting from `l` and ending from `r` to the end of the array.**

#### Why?
Adding more elements to the right will still keep the subarray complete.

---

## 💡 Example Walkthrough:

### Input:
`nums = [1, 3, 1, 2, 2]`

### Steps:
1. **Distinct elements** = `{1, 2, 3}` → total = 3.
2. Use the sliding window to find all windows containing all 3 numbers.

### Complete Subarrays:
- `[1, 3, 1, 2]`
- `[1, 3, 1, 2, 2]`
- `[3, 1, 2]`
- `[3, 1, 2, 2]`

✅ **Answer** = 4

---

## ✅ Final Idea Summary:

- Use a **sliding window** to find all subarrays that contain all distinct elements.
- For every valid window, count how many subarrays end at or after the current position.
- Sum these counts to get the total number of complete subarrays.

⏱ **Time Complexity:** `O(n)`  
📦 **Space Complexity:** `O(n)` (for counting elements)