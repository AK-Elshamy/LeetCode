// Prbolem link: https://codeforces.com/contest/2171/problem/B

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
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (i != 0 && i != n - 1 && p[i] == -1)
            p[i] = 0;
    }

    if (p[0] == -1 && p[n - 1] == -1)
        p[0] = p[n - 1] = 0;
    if (p[0] == -1 or p[n - 1] == -1)
        p[0] = p[n - 1] = max(p[0], p[n - 1]);

    cout << abs(p[0] - p[n - 1]) << el;

    for (auto &x : p)
        cout << x << ' ';
    cout << el;
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