// problem link: https://codeforces.com/contest/2125/problem/B
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

    ll x, y, k;
    cin >> x >> y >> k;
    ll g = __gcd(x, y);
    ll smallX = x / g;
    ll smallY = y / g;
    bool ok = (k >= smallX && k >= smallY) || (x == y);

    cout << (ok ? 1 : 2) << el;
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