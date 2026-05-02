// Problem Link: https://codeforces.com/contest/2157/problem/A
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
    vector<int> p(101, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p[x]++;
    }
    int ans = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (p[i] > i)
            ans += p[i] - i;
        else if (p[i] < i)
            ans += p[i];
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