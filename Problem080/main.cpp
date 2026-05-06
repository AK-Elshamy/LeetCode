// problem link: https://codeforces.com/contest/2226/problem/A
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
const int mod = 676767677;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(101, 0);
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        last = x;
    }

    ll cost = 0;
    for (int i = 2; i <= 100; i++)
    {
        if (a[i] > 0)
        {
            cost += (i * a[i]);
            cost %= mod;
        }
    }
    if (!cost)
        cost = 1;
    else
    {
        cost += (last == 1);
    }
    cout << cost << el;
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