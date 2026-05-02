// Prblem Link: https://leetcode.com/problems/rotated-digits/submissions/1993017070/?envType=daily-question&envId=2026-05-02

class Solution
{
public:
    bool flag = false;

public:
    bool check(int n)
    {
        while (n)
        {
            int mod = n % 10;
            if (mod == 3 or mod == 4 or mod == 7)
                return false;
            if (mod == 2 or mod == 5 or mod == 6 or mod == 9)
                flag = true;
            n /= 10;
        }
        return flag ? true : false;
    }
    int rotatedDigits(int n)
    {
        int ans = 0;
        for (int i = 2; i <= n; ++i)
        {
            ans += check(i);
            flag = false;
        }
        return ans;
    }
};