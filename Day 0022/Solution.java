class Solution {
    /**
     * Determines if it's possible to transform the array into a zero array using
     * the given queries.
     * 
     * @param nums    The input array to be transformed
     * @param queries Array of range queries [left, right]
     * @return true if transformation is possible, false otherwise
     */
    public boolean isZeroArray(int[] nums, int[][] queries) {
        final int n = nums.length;
        // operations[i] represents the number of operations that can be performed at
        // index i
        int[] operations = new int[n + 1];

        // Process each query using the prefix sum technique
        for (int[] query : queries) {
            final int left = query[0];
            final int right = query[1];
            operations[left]++; // Mark the start of the range
            operations[right + 1]--; // Mark the end of the range
        }

        // Check if each element can be reduced to zero
        int currentOperations = 0;
        for (int i = 0; i < n; i++) {
            currentOperations += operations[i];
            // If we can't perform enough operations to reduce the current element to zero
            if (currentOperations < nums[i]) {
                return false;
            }
        }
        return true;
    }
}