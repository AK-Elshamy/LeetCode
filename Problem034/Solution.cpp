using ll = long long;

class Solution {
public:
    ll countSubarrays(vector<int>& nums, ll k) {
        ll result = 0;
        int n = nums.size();

        // Use sliding window approach instead of binary search
        ll sum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            // Shrink window from left while the condition is violated
            while (left <= right && (right - left + 1) * sum >= k) {
                sum -= nums[left++];
            }

            // Add all valid subarrays ending at right
            result += right - left + 1;
        }

        return result;
    }
};