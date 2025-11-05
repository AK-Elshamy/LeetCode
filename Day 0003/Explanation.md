## 🌟 [2302. Count Subarrays With Score Less Than K](https://leetcode.com/problems/count-subarrays-with-score-less-than-k/?envType=daily-question&envId=2025-04-28)


## 🎯 Problem Summary
- **Score** of an array = `sum × length`
- Count non-empty subarrays with score `< k`
- Example: For `[2,1,4,3,5]` with `k=10`, answer is `6`

## 🧠 Key Insight
For each position in the array, we find the longest valid subarray ending at that position, then count all its valid subarrays.

## 💡 Solution: Sliding Window

The key is to use a sliding window approach instead of prefix sums. This gives us:
- Faster computation time
- Cleaner code
- Better memory usage
- More intuitive solution

## 🚶‍♂️ Walkthrough Example

Using `[2,1,4,3,5]` with `k=10`:

1. **Right=0**: Element=2
   - Window: `[2]`
   - Score: `2×1=2` < 10 ✅
   - Add 1 subarray: `[2]`
   - Result=1

2. **Right=1**: Element=1
   - Window: `[2,1]`
   - Score: `3×2=6` < 10 ✅
   - Add 2 subarrays: `[1]`, `[2,1]`
   - Result=3

3. **Right=2**: Element=4
   - Window: `[2,1,4]`
   - Score: `7×3=21` > 10 ❌
   - Shrink: remove 2, window: `[1,4]`
   - Score: `5×2=10` = 10 ❌
   - Shrink: remove 1, window: `[4]`
   - Score: `4×1=4` < 10 ✅
   - Add 1 subarray: `[4]`
   - Result=4

4. **Right=3**: Element=3
   - Window: `[4,3]`
   - Score: `7×2=14` > 10 ❌
   - Shrink: remove 4, window: `[3]`
   - Score: `3×1=3` < 10 ✅
   - Add 1 subarray: `[3]`
   - Result=5

5. **Right=4**: Element=5
   - Window: `[3,5]`
   - Score: `8×2=16` > 10 ❌
   - Shrink: remove 3, window: `[5]`
   - Score: `5×1=5` < 10 ✅
   - Add 1 subarray: `[5]`
   - Result=6

## ⏱️ Complexity
- **Time**: O(n) - Each element is processed at most twice
- **Space**: O(1) - Only using a constant amount of extra memory

## 💭 Why It Works
- The sliding window efficiently handles the sum calculation
- For each valid window ending at position `right`, there are exactly `right-left+1` valid subarrays
- This allows us to count all valid subarrays without explicit enumeration

## ✨ Pro Tips
- Use long long to prevent integer overflow
- The sliding window approach is perfect for subarray problems with cumulative properties
- Always consider edge cases like single-element subarrays
- NO need for prefix sums - direct calculation is faster!
- This approach makes binary search unnecessary!