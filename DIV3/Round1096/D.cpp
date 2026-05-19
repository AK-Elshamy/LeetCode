// https://codeforces.com/contest/2227/problem/D
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define el '\n'

void setup_fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    if (ifstream("in.txt"))
    {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
#endif
}

int checkPalCenterZero(const vector<int> &a, int l, int r, int n)
{

    vector<int> mask(n + 1, 0);

    while (l >= 0 && r < (int)a.size())
    {
        if (a[l] == a[r])
        {
            mask[a[l]] = 1;
            --l;
            ++r;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i <= n; ++i)
    {
        if (!mask[i])
        {
            return i;
        }
    }
    return n + 1;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n);
    int firstZeroIndex = -1, lastZeroIndex = -1;
    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> a[i];
        if (!a[i])
        {
            firstZeroIndex = (~firstZeroIndex ? firstZeroIndex : i);
            lastZeroIndex = i;
        }
    }

    int ans = max(checkPalCenterZero(a, firstZeroIndex, firstZeroIndex, n),
                  checkPalCenterZero(a, lastZeroIndex, lastZeroIndex, n));

    if (ans > 1)
        return void(cout << ans << el);

    vector<int> mask(n + 1, 0);
    bool f = 1;
    int l = firstZeroIndex, r = lastZeroIndex;
    while (l <= r)
    {
        // check pallindromic
        if (a[l] == a[r])
        {
            mask[a[l]] = 1;
            ++l;
            --r;
        }
        else
        {
            f = 0;
            break;
        }
    }

    if (f)
    {
        l = firstZeroIndex - 1, r = lastZeroIndex + 1;
        while (l >= 0 && r < 2 * n)
        {
            if (a[l] == a[r])
            {
                mask[a[l]] = 1;
                --l;
                ++r;
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i <= n; ++i)
        {
            if (!mask[i])
            {
                ans = i;
                break;
            }
        }
    }
    cout << ans << el;
}

int32_t main()
{
    setup_fast_io();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}