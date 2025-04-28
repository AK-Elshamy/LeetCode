class Solution {
    public long countSubarrays(int[] nums, long k) {

        long result = 0;
        long sum = 0;
        int left = 0;

        for (int right = 0; right < nums.length; right++) {
            // Expand window
            sum += nums[right];

            // Shrink window if needed
            while (left <= right && (right - left + 1) * sum >= k) {
                sum -= nums[left++];
            }

            // Count valid subarrays ending at this position
            result += right - left + 1;
        }

        return result;

    }
}