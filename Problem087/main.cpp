// provlem link: https://codeforces.com/contest/2130/problem/B
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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    int sum = 0;
    for (auto &x : a)
    {
        cin >> x;
        sum += x;
    }

    if (s - sum == 1 or sum > s)
    {
        int cntZero = count(a.begin(), a.end(), 0);
        int cntOne = count(a.begin(), a.end(), 1);
        int cntTwo = n - cntZero - cntOne;
        while (cntZero-- > 0)
        {
            cout << 0 << ' ';
        }
        while (cntTwo-- > 0)
        {
            cout << 2 << ' ';
        }
        while (cntOne-- > 0)
        {
            cout << 1 << ' ';
        }
        cout << el;
    }
    else
        cout << "-1\n";
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