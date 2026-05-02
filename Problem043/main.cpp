// Problem Link: https://codeforces.com/contest/2176/problem/A
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
    vector<int> p(n);
    for (auto &x : p)
        cin >> x;
    set<int> st;
    for (int i = 0; i < n; ++i)
    {

        for (int j = i + 1; j < n; ++j)
        {
            if (p[i] > p[j])
            {
                st.insert(j);
            }
        }
    }
    cout << st.size() << endl;
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