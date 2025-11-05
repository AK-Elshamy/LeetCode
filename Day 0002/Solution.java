class Solution {
    /**
     * Counts the number of subarrays of size 3 where the sum of the first and last
     * elements
     * is twice the middle element.
     *
     * @param A the input array
     * @return the count of such subarrays
     */
    public int countSubarrays(int[] A) {
        int n = A.length;
        int count = 0;

        // Iterate through the array, checking subarrays of size 3
        for (int i = 0; i <= n - 3; ++i) {
            int first = A[i];
            int mid = A[i + 1];
            int last = A[i + 2];

            // Check if the condition is satisfied
            if (2 * mid == first + last) {
                count++;
            }
        }

        return count;
    }
}