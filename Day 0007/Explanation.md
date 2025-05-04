# [Number of Equivalent Domino Pairs - Solution 🎯](https://leetcode.com/problems/number-of-equivalent-domino-pairs/?envType=daily-question&envId=2025-05-04)

## Problem Overview 📝

Given a list of dominoes where `dominoes[i] = [a, b]`, two dominoes are considered equivalent if either `(a == c and b == d)` or `(a == d and b == c)`. We need to count the number of pairs `(i, j)` where `0 <= i < j < dominoes.length` and `dominoes[i]` is equivalent to `dominoes[j]`.

### Examples:

**Example 1:**
```
Input: dominoes = [[1,2],[2,1],[3,4],[5,6]]
Output: 1
```

**Example 2:**
```
Input: dominoes = [[1,2],[1,2],[1,1],[1,2],[2,2]]
Output: 3
```

## Intuition 💡

The key insight is that we need to count pairs of equivalent dominoes. If we can normalize each domino (like sorting its values), we can use a simple counting approach to count occurrences of each unique domino, then calculate the number of possible pairs.

## Approach 🚀

1. Create an array to store the count of each unique domino (NO HashMap needed! 🙅‍♂️)
2. For each domino, normalize its representation (ensure smaller value comes first)
3. Use a clever math trick to convert the pair to a unique integer key
4. Increment the count for this key in our array
5. Add the current count to our result before incrementing (this gives us the number of new pairs)
6. Continue processing all dominoes in a single pass

## Algorithm Details

### The Math Trick:
We create a unique key for each domino using:
```
key = min(val1, val2) * 10 + max(val1, val2)
```

This ensures that `[1,2]` and `[2,1]` both map to the same key: `12`.

### Finding Pairs on the Fly:
For each domino, we add the current count to our result before incrementing the count:
```
result += counts[key];
counts[key]++;
```

This elegant approach eliminates the need for a second pass or complex calculations.

## Complexity Analysis ⚙️

- **Time Complexity**: ⏱️ O(n) where n is the number of dominoes. We process each domino exactly once - super efficient!
- **Space Complexity**: 📊 O(1) since we use a fixed-size array of 100 elements regardless of input size (constraints state domino values are between 1 and 9).

## Example Walkthrough 🚶‍♂️

Let's trace through the example: `[[1,2],[2,1],[3,4],[5,6]]`

1. Process `[1,2]`: 
   - key = min(1,2) * 10 + max(1,2) = 1 * 10 + 2 = 12
   - counts[12] = 0, so result += 0
   - counts[12] becomes 1

2. Process `[2,1]`: 
   - key = min(2,1) * 10 + max(2,1) = 1 * 10 + 2 = 12 (same as previous! 🎯)
   - counts[12] = 1, so result += 1
   - counts[12] becomes 2

3. Process `[3,4]`:
   - key = min(3,4) * 10 + max(3,4) = 3 * 10 + 4 = 34
   - counts[34] = 0, so result += 0
   - counts[34] becomes 1

4. Process `[5,6]`:
   - key = min(5,6) * 10 + max(5,6) = 5 * 10 + 6 = 56
   - counts[56] = 0, so result += 0
   - counts[56] becomes 1

Final result: 1 pair of equivalent dominoes. 🎮

## Key Insights 💎

1. **Math Trick**: Using `min(a,b) * 10 + max(a,b)` creates a perfect unique identifier for each domino type 🧠

2. **Running Count**: Adding the current count directly to our result is more efficient than counting first and calculating pairs later 🏃‍♂️

3. **Array vs HashMap**: Using a simple array instead of a HashMap gives us faster performance and cleaner code 🚀

4. **Single Pass**: We solve the entire problem in one pass through the input - O(n) time complexity! ⚡

---