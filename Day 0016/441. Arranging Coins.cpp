using ll = long long;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        ll l = 1, r = 1e5;
        int res = 1;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            ll cur = mid * 1LL * (mid + 1) / 2;
            if (cur > (ll)n)
                r = mid - 1;
            else
            {
                res = mid;
                l = mid + 1;
            }
        }
        return res;
    }
};