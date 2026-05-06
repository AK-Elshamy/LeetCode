// problem linK: https://codeforces.com/contest/2124/problem/A
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
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] < a[i - 1])
        {
            cout << "YES" << el;
            cout << 2 << el << a[i - 1] << ' ' << a[i] << el;
            return;
        }
    }
    cout << "NO" << el;
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