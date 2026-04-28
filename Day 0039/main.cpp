// ProblemLink: https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid?envType=daily-question&envId=2026-04-28
class Solution
{
public:
    int minOperations(vector<vector<int>> &grid, int k)
    {

        int mn = 1e9;
        vector<int> a;
        for (auto &g : grid)
        {
            for (auto &x : g)
            {
                a.push_back(x);
                mn = min(mn, x);
            }
        }
        sort(a.begin(), a.end());
        for (auto &x : a)
        {
            if (abs(x - mn) % k != 0)
                return -1;
        }
        int ans = 0;

        int mid = a[a.size() / 2];

        for (auto &x : a)
        {
            ans += abs(x - mid) / k;
        }

        return ans;
    }
};