// problem link: https://codeforces.com/contest/2128/problem/B
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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int l = 0, r = n - 1;
    int idx = 0;
    string ans{""};
    while (l <= r)
    {
        if (idx & 1)
        {
            int mn = min(a[l], a[r]);
            if (mn == a[l])
            {
                ans += 'L';
                ++l;
            }
            else
            {
                ans += 'R';
                --r;
            }
        }
        else
        {
            int mx = max(a[l], a[r]);
            if (mx == a[l])
            {
                ans += 'L';
                ++l;
            }
            else
            {
                ans += 'R';
                --r;
            }
        }
        ++idx;
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