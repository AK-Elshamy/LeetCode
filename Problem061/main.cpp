// Problem linK: https://codeforces.com/contest/2160/problem/A
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
    for (int i = 0; i < 101; i++)
    {
        if (!p[i])
        {
            cout << i << el;
            return;
        }
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