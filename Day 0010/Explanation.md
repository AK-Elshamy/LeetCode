# [🎯 Problem Tutorial: Delete Greatest Value in Each Row](https://leetcode.com/problems/delete-greatest-value-in-each-row)

## 📝 Problem Overview
This is a fun matrix manipulation problem where we need to repeatedly remove the largest numbers from each row and sum up the maximum values we remove each time! 

## 🎮 How to Solve It
1. 🔄 For each iteration:
   - Find the largest number in each row
   - Remove these largest numbers
   - Add the maximum of these removed numbers to our answer
   - Continue until the matrix is empty

## 💡 Implementation Approach
1. 🧮 For each row in the matrix:
   - Sort the row in descending order
   - This makes it easy to get the largest value each time
2. 📊 For each column:
   - Find the maximum value among all rows at that position
   - Add this maximum to our answer
3. 🎯 The sum of these maximums is our final answer

## 💡 Key Points to Remember
- ✨ Each row can have multiple numbers with the same maximum value
- 📊 The matrix gets smaller after each operation
- 🎯 We need to keep track of the sum of maximum values

## 🎲 Example Walkthrough
Let's look at the first example:
```
Input: grid = [[1,2,4],[3,3,1]]

Step 1: Sort each row in descending order
[[4,2,1],[3,3,1]]

Step 2: Find maximum in each column
Column 0: max(4,3) = 4
Column 1: max(2,3) = 3
Column 2: max(1,1) = 1

Step 3: Sum up the maximums
Answer = 4 + 3 + 1 = 8
```

## ⚠️ Important Constraints
- Matrix size: 1 to 50 rows and columns
- Numbers in matrix: 1 to 100

## 🚀 Tips for Implementation
1. You can sort each row in descending order first
2. Then iterate through columns, finding the maximum in each column
3. Add these maximums to get the final answer
4. Consider edge cases like single row/column matrices

## 🔍 Common Pitfalls to Avoid
1. ❌ Don't forget to handle empty matrices
2. ❌ Don't modify the original matrix if you need to preserve it
3. ❌ Don't forget that multiple elements can have the same maximum value
4. ❌ Don't forget to check matrix dimensions before accessing elements

## 📚 Additional Resources
- [C++ Vector Documentation](https://en.cppreference.com/w/cpp/container/vector)
- [C++ Sort Algorithm](https://en.cppreference.com/w/cpp/algorithm/sort)
- [Matrix Operations Guide](https://en.wikipedia.org/wiki/Matrix_(mathematics))

---