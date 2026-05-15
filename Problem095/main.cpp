// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/?envType=daily-question&envId=2026-05-15
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1;
        int mxValue = nums[0]; // assume
        while (start <= end)
        {
            int mid = (start + end) / 2;

            int cur = nums[mid];
            if (mxValue > cur)
            {
                end = mid - 1; // index Max end
            }
            else
            {
                start = mid + 1;
            }
        }

        int idxMin = (end + 1) % nums.size();
        return nums[idxMin];
    }
};