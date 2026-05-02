// Problem Link: https://codeforces.com/contest/2169/problem/A
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
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sumRight = 0, sumLeft = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > a)
            sumRight++;
        else if (v[i] < a)
            sumLeft++;
    }
    cout << (sumRight > sumLeft ? a + 1 : a - 1) << el;
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