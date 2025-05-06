```
# [🔗 🎯 Problem: Count Sorted Vowel Strings](https://leetcode.com/problems/count-sorted-vowel-strings)

---

## 🧩 Description

Given an integer `n`, return the number of strings of length `n` that:
- Consist only of **vowels**: `'a', 'e', 'i', 'o', 'u'`
- Are **lexicographically sorted** (i.e., each character is same or comes after the previous one)

---

## 💡 Intuition

We want to count the number of **non-decreasing strings** of vowels with length `n`.

This is equivalent to **"combinations with repetition"**:
> Choose `n` vowels from `5` options where order doesn't matter but repetition is allowed.

This follows the **stars and bars** theorem:

\[
\text{Answer} = C(n + 5 - 1, 5 - 1) = C(n + 4, 4)
\]

---

## 📌 Examples

### Example 1:
```

Input: n = 1
Output: 5
Explanation: \["a", "e", "i", "o", "u"]

```

### Example 2:
```

Input: n = 2
Output: 15
Explanation: \["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"]
Note: "ea" is invalid because 'e' comes after 'a'

```

### Example 3:
```

Input: n = 33
Output: 66045

````

---

## ✅ Solution 1: Math (Combinations Formula)

### Java
```java
class Solution {
    public int countVowelStrings(int n) {
        return combination(n + 4, 4);
    }

    private int combination(int n, int k) {
        long res = 1;
        for (int i = 1; i <= k; i++) {
            res = res * (n - i + 1) / i;
        }
        return (int) res;
    }
}
````

### C++

```cpp
class Solution {
public:
    int countVowelStrings(int n) {
        return combination(n + 4, 4);
    }

private:
    int combination(int n, int k) {
        long res = 1;
        for (int i = 1; i <= k; ++i) {
            res = res * (n - i + 1) / i;
        }
        return res;
    }
};
```

---

## ✅ Solution 2: Dynamic Programming (Bottom-Up)

### Java

```java
class Solution {
    public int countVowelStrings(int n) {
        int[][] dp = new int[n + 1][5];

        for (int j = 0; j < 5; j++) dp[0][j] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 4; j >= 0; j--) {
                dp[i][j] = dp[i][j + 1] + dp[i - 1][j];
                if (j == 4) dp[i][j] = dp[i - 1][j];
            }
        }

        return dp[n][0];
    }
}
```

### C++

```cpp
class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n + 1][5];

        for (int j = 0; j < 5; ++j) dp[0][j] = 1;

        for (int i = 1; i <= n; ++i) {
            for (int j = 4; j >= 0; --j) {
                if (j == 4) dp[i][j] = dp[i - 1][j];
                else dp[i][j] = dp[i][j + 1] + dp[i - 1][j];
            }
        }

        return dp[n][0];
    }
};
```

---

## 🏁 Time & Space Complexity

| Approach     | Time       | Space      |
| ------------ | ---------- | ---------- |
| Math Formula | `O(1)`     | `O(1)`     |
| DP (2D)      | `O(n * 5)` | `O(n * 5)` |

---

## ✨ Tip

This type of problem is common in combinatorics under "combinations with repetitions" — practice with **stars and bars** concept!

```
---