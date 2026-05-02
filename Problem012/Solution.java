class Solution {
    public int countCompleteSubarrays(int[] ar) {
        // Find the number of distinct elements in the array
        Set<Integer> st = new HashSet<>();
        for (var x : ar) {
            st.add(x);
        }
        int distinct = st.size();

        // Frequency array to track counts of elements in the current window
        int[] frq = new int[2001];

        int l = 0, r = 0, ans = 0, n = ar.length;

        // Sliding window approach
        for (; r < n; ++r) {
            // Add the current element to the window and update distinct count
            if (frq[ar[r]]++ == 0) {
                distinct--;
            }

            // Shrink the window from the left until it no longer contains all distinct
            // elements
            while (distinct == 0) {
                if (--frq[ar[l++]] == 0) {
                    distinct++;
                }
            }

            // Add the count of valid subarrays ending at index r
            ans += l;
        }

        return ans;
    }
}