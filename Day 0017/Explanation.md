**📘 Problem Explanation: Longest Unequal Adjacent Groups Subsequence I**

**🔗 Problem Link:** [https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/](https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/)

---

### 🧠 Problem Summary:

You're given two lists:

* `words`: an array of strings.
* `groups`: an array of integers, where `groups[i]` corresponds to the group of `words[i]`.

**Goal:** Build the longest subsequence of `words` such that **no two adjacent words in the subsequence** belong to the same group.

---

### 💡 Key Idea:

We want to build the **longest** subsequence where **no two consecutive elements** have the same group. So we only include a word if its group is **different** from the last added word’s group.

This is a greedy strategy — at every step, we make the locally optimal decision by checking only the previous group.

---

### ✅ Greedy Strategy:

* Start with an empty answer list.
* Iterate through all words:

  * If the answer list is empty OR the current word's group is different from the last selected word’s group, then add the word to the answer.

This guarantees a valid and longest possible sequence.

---

### 🧪 Example:

```text
Input:
words = ["a", "b", "c", "d"]
groups = [1, 2, 2, 3]

Output: ["a", "b", "d"]

Explanation:
- "a" (group 1) ✅
- "b" (group 2) ✅
- "c" (group 2) ❌ (same as previous group)
- "d" (group 3) ✅
```

---

### 🕒 Time Complexity:

* **O(n)** where n = length of the `words` array.

### 📦 Space Complexity:

* **O(n)** in the worst case (if all groups are different).

---

### 🏷️ Tags:

Greedy, Array, Strings
---