// Problem link: https://codeforces.com/contest/2154/problem/A
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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0, preZero = k;

    for (auto &ch : s)
    {
        if (ch == '1')
        {
            if (preZero >= k - 1)
            {
                ans++;
            }
            preZero = 0;
        }
        else
        {
            preZero++;
        }
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