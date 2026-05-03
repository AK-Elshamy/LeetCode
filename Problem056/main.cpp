// Problem Link: https://codeforces.com/contest/2161/problem/A
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
    int R, X, D, n;
    string s;

    cin >> R >> X >> D >> n >> s;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int c = s[i] - '0';
        if (c & 1)
            ans++, R -= D;
        else
            ans += (R < X);
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