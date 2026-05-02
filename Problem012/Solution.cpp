#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int countCompleteSubarrays(vector<int> &nums)
    {
        // Find the number of distinct elements in the array
        unordered_set<int> st(nums.begin(), nums.end());
        int distinct = st.size();

        // Frequency array to track counts of elements in the current window
        vector<int> frq(2001, 0);

        int l = 0, r = 0, ans = 0, n = nums.size();

        // Sliding window approach
        for (; r < n; ++r)
        {
            // Add the current element to the window and update distinct count
            distinct -= (frq[nums[r]]++ == 0);

            // Shrink the window from the left until it no longer contains all distinct elements
            while (distinct == 0)
            {
                distinct += (--frq[nums[l++]] == 0);
            }

            // Add the count of valid subarrays ending at index r
            ans += l;
        }

        return ans;
    }
};