// https://codeforces.com/contest/2144/problem/B
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
    ll sum = 0;
    for (auto &x : a)
        cin >> x, sum += x;
    ll tot = n * (n + 1) / 2;
    int x = -1;

    int count_zeros = count(a.begin(), a.end(), 0);
    if (count_zeros == 1)
    {
        x = tot - sum;
    }
    int start = -1, end = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0 && count_zeros == 1)
        {
            a[i] = x;
        }
        if (a[i] != i + 1)
        {
            if (start == -1)
            {
                start = i;
            }
            end = i;
        }
    }
    // cout << "start: " << start << " end: " << end << el;
    cout << end - start + 1 - !(~start && ~end) << el;
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