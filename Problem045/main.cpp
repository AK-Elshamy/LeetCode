// Problem Link: https://codeforces.com/contest/2173/problem/A
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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0, cnt = -1;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
            cnt = k + i;
        else
            ans += (i > cnt);
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