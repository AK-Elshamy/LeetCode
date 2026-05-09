// https://codeforces.com/contest/2137/problem/C
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
    ll a, b;
    cin >> a >> b;
    ll mx = -1;
    if ((a + b) & 1 ^ 1)
        mx = a + b;
    if ((a * b + 1) & 1 ^ 1)
        mx = max(mx, a * b + 1);
    if (b & 1 ^ 1)
    {
        ll t = b / 2;

        b /= t;
        a *= t;
        ll x = a + b;
        if (x & 1 ^ 1)
            mx = max(mx, x);
    }
    cout << mx << el;
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