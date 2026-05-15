// problem link: https://codeforces.com/contest/2224/problem/B
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
    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    int mx = a.back();
    a.pop_back();

    a.erase(unique(a.begin(), a.end()), a.end());

    a.insert(a.begin(), mx);

    ll sum = 1LL * mx * n;

    int mex = 0;

    for (auto &x : a)
    {
        if (x == mex)
            ++mex;

        if (mex == mx)
            ++mex;

        sum += mex;
    }

    sum += 1LL * (n - a.size()) * mex;

    cout << sum << el;
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