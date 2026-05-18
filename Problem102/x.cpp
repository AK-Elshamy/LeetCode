// https://codeforces.com/contest/2230/problem/C
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
    ll ans = 0;

    ll canAdd = 0;
    ll count1 = 0;

    int groups = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            count1++;
        }
        else
        {
            ans += x;
            canAdd += (x / 2 - 1);
            groups++;
        }
    }
    if (groups == 1)
    {
        canAdd++;
    }

    ans += min(canAdd, count1);

    if (ans < 3)
    {
        ans = 0;
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