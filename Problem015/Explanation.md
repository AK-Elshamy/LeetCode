
# [🚀 Maximize Minimum MEX 💡](https://codeforces.com/contest/2093/problem/E)

## 🧠 **What is the problem?**

You are given an array `a` and a number `k`.
You need to split the array into `k` **non-overlapping subarrays** such that:

> 🟢 **The minimum MEX** among all subarrays is **as large as possible**!

---

## 🔍 **Key Concepts**

* **Subarray**: A sequence of **consecutive** elements from the array.
* **MEX**: The **Minimum Excluded Number**
  It's the **smallest non-negative integer** **not** present in a subarray.
  Example:

  * MEX of `[0, 1, 3]` is `2`
  * MEX of `[1, 2, 3]` is `0`

---

## 💡 Goal

> 🎯 **Find the largest possible value of `x`**
> So that the array can be split into `k` subarrays,
> and the **minimum MEX** among them is **at least `x`**.

---

## 🛠️ How to Think About It?

We **don't need to find the actual subarrays** ✅
We only care about **whether it’s possible** to split with a given MEX value `x`.

So the idea is:

* Try different values of `x`
* For each value, check if it's possible to split the array into `k` subarrays such that **each subarray has MEX ≥ x**

---

## 📦 Modern Solution Approach

### 1️⃣ **Binary Search on Answer** 🔎

* We know the answer lies between `0` and `n`
* We binary search on `x` (the MEX candidate)
* For each `x`, we check if we can create `k` subarrays with MEX ≥ x

### 2️⃣ **Greedy Checking** 💼

* As we loop through the array:

  * Track how many unique numbers from `0` to `x-1` are found
  * If we find all of them → we can make a segment
  * Reset and repeat

---

## 📈 Time Complexity

* Binary search on answer: `O(log n)`
* Each check: `O(n)`
* ✅ Total: `O(n log n)`

---

## 🌍 Real-Life Analogy

Imagine you're organizing books (numbers) into `k` boxes (subarrays),
and each box must be **missing** some number (MEX).
Your challenge is to **maximize the smallest missing number** across all boxes.

---

## ✅ Summary

| Concept     | Description                                                    |
| ----------- | -------------------------------------------------------------- |
| Goal        | Maximize minimum MEX across `k` splits                         |
| Method      | Binary Search + Greedy validation                              |
| Key Idea 🧠 | Each valid subarray must contain all numbers from `0` to `x-1` |
| Tools 🧰    | `binary search`, `set/frequency`, `greedy thinking`            |

---

**Keep pushing 💪 You're getting better every challenge!**
🧠✨ *"One day, the sun will rise."* ☀️

---
