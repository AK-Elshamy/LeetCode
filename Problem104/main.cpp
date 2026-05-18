// https://codeforces.com/contest/2230/problem/B
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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '4')
        {
            ans++;
        }
        else
        {
            v.push_back(s[i] - '0');
        }
    }

    n = v.size();
    if (n == 0)
        return void(cout << ans << el);

    vector<int> prefix_sum(n + 1, 0), suffix_sum(n + 1, 0);
    for (int l = 1, r = n; l <= n; l++, r--)
    {
        prefix_sum[l] = prefix_sum[l - 1] + (v[l - 1] != 2);
        suffix_sum[r - 1] = suffix_sum[r] + (v[r - 1] == 2);
    }

    if (prefix_sum[n] == 0 || suffix_sum[1] == 0)
    {
        cout << ans << el;
        return;
    }
    int rem = INT_MAX;
    for (int i = 0; i <= n; i++)
    {
        rem = min(rem, prefix_sum[i] + suffix_sum[i]);
    }
    cout << ans + rem << el;
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