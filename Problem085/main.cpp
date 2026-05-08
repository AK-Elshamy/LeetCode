// problem linK: https://codeforces.com/contest/2131/problem/C
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
    vector<int> s(n), t(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        int a = s[i] % k;
        int b = (k - (s[i] % k)) % k;
        s[i] = min(a, b);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        int a = t[i] % k;
        int b = (k - (t[i] % k)) % k;
        t[i] = min(a, b);
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << (s == t ? "YES" : "NO") << el;
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