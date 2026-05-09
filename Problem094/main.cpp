// https://codeforces.com/contest/2147/problem/B
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
    vector<int> ans(n * 2 + 1, 1);
    int temp = n;
    for (int left = 1; left < temp; ++left)
    {
        int right = n + left;
        if (ans[right] != 1)
            right = left + 2 * n;

        ans[left] = ans[right] = n;
        --n;
    }
    for (int i = 1; i <= temp * 2; ++i)
        cout << ans[i] << ' ';
    cout << el;
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