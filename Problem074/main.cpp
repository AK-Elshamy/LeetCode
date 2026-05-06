// problem link: https://codeforces.com/contest/2125/problem/A
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
    string f, n, ans;
    f = n = ans = "";
    for (auto &c : s)
    {
        if (c == 'F')
            f += c;
        else if (c == 'N')
            n += c;
        else
            ans += c;
    }
    cout << ans + f + n << el;
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