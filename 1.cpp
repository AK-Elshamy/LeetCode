// https://codeforces.com/contest/2226/problem/C
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
    int righ, left;
    int ans = 0;
    cin >> left;

    for (int i = 1; i < n; ++i)
    {
        cin >> righ;
        int mx = max(left, righ);
        int mn = min(left, righ);
        if (mn + 1 == mx or 2 * mn == mx)
        {
            ans++;
        }
        left = righ;
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