# [ 🎯 Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/?envType=daily-question&envId=2025-05-21)

## 💡 Solution Approaches

### Method 1: Using Hash Sets (O(m+n) Space)
```cpp
// Time Complexity: O(m*n)
// Space Complexity: O(m+n)
```
- Use two hash sets/maps to track rows and columns containing zeros
- First pass: Mark rows and columns containing zeros
- Second pass: Set all elements in marked rows and columns to zero
- Implementation:
  - C++: `unordered_map<int, bool>`
  - Java: `HashSet<Integer>`

### Method 2: In-place Solution (O(1) Space)
```cpp
// Time Complexity: O(m*n)
// Space Complexity: O(1)
```
- Use first row and column as markers
- Handle edge case for first row/column separately
- Two passes: Mark and then set zeros
- Implementation:
  - Use boolean flags for first row/column
  - Process matrix from top-left to bottom-right
  - Handle first row/column last

## 🔑 Key Insights
1. **Space Optimization** ⚡
   - Instead of using extra space, we can use the matrix itself to mark positions
   - First row and column can serve as markers
   - Only need two boolean flags for edge cases

2. **Edge Cases** ⚠️
   - Handle first row and column separately
   - Consider when first row/column contains zero
   - Process rest of matrix after marking

3. **Implementation Tips** 💡
   - Use boolean flags for first row/column
   - Process matrix in correct order to avoid overwriting markers
   - Consider using bit manipulation for space optimization

## 🚀 Performance Comparison

| Approach  | Time Complexity | Space Complexity |      Pros           |    Cons      |
|-----------|---------------- |------------------|---------------------|--------------|
| Hash Sets |    O(m*n)       |    O(m+n)        | Simple, Readable    | Extra Space  |
| In-place  |    O(m*n)       |    O(1)          | Space Efficient     | More Complex |

## 📝 Notes
- The in-place solution is preferred for large matrices
- Consider matrix dimensions when choosing approach
- Always handle edge cases first
- Both solutions are optimal in terms of time complexity
- Choose based on space constraints and code maintainability

---