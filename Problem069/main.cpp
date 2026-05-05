// problem l inK: https://codeforces.com/contest/2146/problem/A
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
    vector<int> a(101, 0);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a[val]++;
        mx = max(mx, val);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int cnt = 0;
        for (int j = 1; j <= mx; ++j)
        {
            cnt += (a[j] >= i);
        }
        ans = max(ans, cnt * i);
    }
    cout << ans << el;
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