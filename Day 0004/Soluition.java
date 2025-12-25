import java.util.*;

class Solution {
    public long countSubarrays(int[] A, int k) {
        int n = A.length;
        int mx = Arrays.stream(A).max().getAsInt(); // Find the maximum element
        int left = 0, count = 0;
        long ans = 0;

        for (int right = 0; right < n; ++right) {
            if (A[right] == mx) {
                count++;
            }

            while (count >= k) {
                if (A[left] == mx) {
                    count--;
                }
                left++;
            }

            ans += left;
        }

        return ans;
    }
}