// https://codeforces.com/contest/2227/problem/C
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
    vector<int> ans(n), even, Div3, odd;
    int idx = n - 1;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x % 6 == 0)
        {
            ans[idx--] = x;
        }
        else if (x % 3 == 0)
        {
            Div3.push_back(x);
        }
        else
        {
            x & 1 ? odd.push_back(x) : even.push_back(x);
        }
    }

    while (!even.empty())
    {
        ans[idx--] = even.back();
        even.pop_back();
    }
    while (!odd.empty())
    {
        ans[idx--] = odd.back();
        odd.pop_back();
    }
    while (!Div3.empty())
    {
        ans[idx--] = Div3.back();
        Div3.pop_back();
    }

    for (auto &x : ans)
        cout << x << ' ';
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