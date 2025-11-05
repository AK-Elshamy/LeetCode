class Solution {
public:
    /**
     * Counts how many groups have the maximum size when grouping numbers from 1 to n
     * by their digit sum.
     *
     * @param n The upper bound of numbers to consider
     * @return The count of largest groups
     */
    int countLargestGroup(int n) {
        // Map to store the count of numbers for each digit sum
        std::unordered_map<int, int> digitSumFrequency;
        
        // Calculate digit sum for each number from 1 to n
        for (int i = 1; i <= n; ++i) {
            int num = i;
            int digitSum = 0;
            
            // Calculate sum of digits for current number
            while (num > 0) {
                digitSum += num % 10;  // Add the last digit
                num /= 10;             // Remove the last digit
            }
            
            // Increment the count for this digit sum
            digitSumFrequency[digitSum]++;
        }
        
        // Find the maximum frequency across all digit sums
        int maxFrequency = 0;
        for (const auto& pair : digitSumFrequency) {
            maxFrequency = std::max(maxFrequency, pair.second);
        }
        
        // Count how many groups have the maximum frequency
        int largestGroupCount = 0;
        for (const auto& pair : digitSumFrequency) {
            if (pair.second == maxFrequency) {
                largestGroupCount++;
            }
        }
        
        return largestGroupCount;
    }
};