// problem link: https://codeforces.com/contest/2151/problem/A
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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);

    bool is_consecutive = true;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];

        if (i > 0 && a[i] != a[i - 1] + 1)
        {
            is_consecutive = false;
        }
    }

    if (is_consecutive)
    {
        cout << n - a[m - 1] + 1 << el;
    }
    else
    {
        cout << 1 << el;
    }
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