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
    int zero = 0, one = 0, two = 0;
    for (auto &x : a)
        cin >> x, zero += (x == 0), one += (x == 1), two += (x == 2);

    int ans = zero + min(one, two);

    if (one > 0 && two > 0)
        ans += (max(one, two) - min(one, two)) / 3;
    else
    {
        ans += max(one, two) / 3;
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