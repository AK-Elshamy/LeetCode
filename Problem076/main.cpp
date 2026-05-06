// problem link: https://codeforces.com/contest/2140/problem/A
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
    string s;
    cin >> s;

    int countOne = count(s.begin(), s.end(), '1');
    int ans = 0;
    for (int i = n - 1; i >= n - countOne; i--)
    {
        if (s[i] == '0')
        {
            ++ans;
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