
class Solution
{
public:
   
    int longestConsecutive(vector<int> &nums)
    {
        // Store all numbers in an unordered_map for O(1) lookups
        unordered_map<int, bool> mp;
        for (const int &num : nums)
            mp[num] = true;

        int result = 0;
        // Iterate through each number in the map
        for (auto &[num, _] : mp)
        {
            // Only start counting from the smallest number in a sequence
            if (mp.count(num - 1))
                continue;
            // Count the length of the current sequence
            int currentNum = num;
            while (mp.count(currentNum))
                ++currentNum;
            // Update the result if current sequence is longer
            result = max(result, currentNum - num);
        }
        return result;
    }
};