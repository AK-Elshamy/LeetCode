class Solution
{
public:
    // Function to count subarrays where 2 * (first + last) == mid
    int countSubarrays(vector<int> &A)
    {
        int n = A.size(); // Get the size of the array
        int res = 0;      // Initialize result counter

        // Iterate through the array, stopping 2 elements before the end
        for (int i = 0; i < n - 2; ++i)
        {
            int first = A[i];    // First element of the subarray
            int mid = A[i + 1];  // Middle element of the subarray
            int last = A[i + 2]; // Last element of the subarray

            // Check the condition and increment result if true
            if (2 * (first + last) == mid)
            {
                ++res;
            }
        }

        return res; // Return the total count
    }
};