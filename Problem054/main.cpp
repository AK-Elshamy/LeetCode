// Problem linK: https://leetcode.com/problems/rotate-string/?envType=daily-question&envId=2026-05-03

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.size();
        while (n--)
        {
            if (s == goal)
                return true;
            s.push_back(s[0]);
            s.erase(0, 1);
        }
        return false;
    }
};