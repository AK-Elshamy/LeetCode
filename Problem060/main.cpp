// Problem link: https://codeforces.com/contest/2162/problem/B
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
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            a.push_back(i + 1);
    }
    cout << a.size() << el;
    for (int i : a)
    {
        cout << i << " ";
    }
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