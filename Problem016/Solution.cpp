class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        const int n = nums.size();
        // operations[i] represents the number of operations that can be performed at index i
        vector<int> operations(n + 1, 0);

        // Process each query using the prefix sum technique
        for (const auto &query : queries)
        {
            const int left = query[0];
            const int right = query[1];
            operations[left]++;      // Mark the start of the range
            operations[right + 1]--; // Mark the end of the range
        }

        // Check if each element can be reduced to zero
        int current_operations = 0;
        for (int i = 0; i < n; ++i)
        {
            current_operations += operations[i];
            // If we can't perform enough operations to reduce the current element to zero
            if (current_operations < nums[i])
            {
                return false;
            }
        }
        return true;
    }
};