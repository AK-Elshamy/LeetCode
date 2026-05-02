class Solution {

    public long minSum(int[] nums1, int[] nums2) {
        // Calculate sums and count zeros
        long currentSum1 = 0, currentSum2 = 0;
        int zeroCount1 = 0, zeroCount2 = 0;

        for (int num : nums1) {
            currentSum1 += num;
            zeroCount1 += (num == 0) ? 1 : 0;
        }

        for (int num : nums2) {
            currentSum2 += num;
            zeroCount2 += (num == 0) ? 1 : 0;
        }

        // Calculate minimum possible sum for each array (replacing zeros with 1s)
        final long minPossibleSum1 = currentSum1 + zeroCount1;
        final long minPossibleSum2 = currentSum2 + zeroCount2;

        // Case 1: Both arrays have zeros - we can always make them equal
        if (zeroCount1 > 0 && zeroCount2 > 0) {
            return Math.max(minPossibleSum1, minPossibleSum2);
        }

        // Case 2: Only first array has zeros
        if (zeroCount1 > 0 && zeroCount2 == 0) {
            return (minPossibleSum1 <= currentSum2) ? currentSum2 : -1;
        }

        // Case 3: Only second array has zeros
        if (zeroCount1 == 0 && zeroCount2 > 0) {
            return (minPossibleSum2 <= currentSum1) ? currentSum1 : -1;
        }

        // Case 4: Neither array has zeros - must already be equal
        return (currentSum1 == currentSum2) ? currentSum1 : -1;
    }
}
