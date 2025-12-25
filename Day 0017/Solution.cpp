class Solution
{
public:
    vector<string> getLongestSubsequence(vector<string> &words, vector<int> &groups)
    {
        vector<string> ans;
        int lastGroup = -1;
        for (int i = 0; i < words.size(); ++i)
        {
            if (ans.empty() || groups[i] != lastGroup)
            {
                ans.push_back(words[i]);
                lastGroup = groups[i];
            }
        }
        return ans;
    }
};
