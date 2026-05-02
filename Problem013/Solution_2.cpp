/**
 * Solution for LeetCode 75: Sort Colors
 * Uses Counting Sort approach
 */
#include <vector>
using namespace std;

class Solution
{
public:
       void sortColors(vector<int> &nums)
    {
        int count2 = 0; // Count of 2s
        int count1 = 0; // Count of 1s
        int n = nums.size();

        // First pass: Count 1s and 2s, set all to 0
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == 2)
            {
                ++count2;
            }
            else if (nums[i] == 1)
            {
                ++count1;
            }
            nums[i] = 0;
        }

        // Second pass: Fill in 1s and 2s from the end
        int idx = n - 1;
        while (count2-- > 0)
        {
            nums[idx--] = 2;
        }
        while (count1-- > 0)
        {
            nums[idx--] = 1;
        }
    }
};