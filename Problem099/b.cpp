// https://codeforces.com/contest/2228/problem/A
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
    int n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    if (n < 4)
    {
        cout << 1 << el;
        return;
    }

    cout << k + min(abs(x1 - x2), n - max(x1, x2) + min(x1, x2)) << el;
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