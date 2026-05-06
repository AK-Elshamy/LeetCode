// problem link: https://codeforces.com/contest/2224/problem/A
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
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = n - 2; i >= 0; i--)
    {

        a[i] = max(a[i], a[i + 1] + a[i]);
    }

    cout << count_if(a.begin(), a.end(), [](ll x)
                     { return x > 0; })
         << el;
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