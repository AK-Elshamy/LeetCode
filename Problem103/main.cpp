// https://codeforces.com/contest/2230/problem/A
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
    ll n, a, b;
    cin >> n >> a >> b;
    ll cost1 = n * a;
    ll cost2 = (n / 3) * b;
    ll rem = n % 3;
    if (rem == 1)
        cost2 += min(a, b);
    else if (rem == 2)
        cost2 += min(2 * a, b);
    cout << min(cost1, cost2) << el;
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