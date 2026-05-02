// Problem Link: https://codeforces.com/contest/2170/problem/A
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
    int ans = 5 * n * n - 5 * n - 5;
    if (n == 1)
        ans = 1;
    else if (n == 2)
        ans = 9;
    else if (n == 3)
        ans = 29;
    else if (n == 4)
        ans = 56;

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