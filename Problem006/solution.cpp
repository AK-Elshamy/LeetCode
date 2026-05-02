class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        // If array has less than 3 elements, return false
        if (arr.size() < 3)
            return false;

        // Check each triplet of consecutive numbers
        for (int i = 0; i <= arr.size() - 3; i++)
        {
            // Check if current number and next two numbers are all odd
            if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1)
            {
                return true;
            }
        }

        return false;
    }
};