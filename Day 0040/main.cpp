// ProblemLink: https://codeforces.com/contest/2179/problem/B
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
    ll totalWeight = 0;

    for (int i = 1; i < n; i++)
    {
        int temp = abs(a[i] - a[i - 1]);
        totalWeight += temp;
    }

    ll ans = totalWeight, curr = totalWeight;
    for (int i = 0; i < n; i++)
    {
        // test skip all

        if (i == 0)
        {
            int temp = abs(a[i + 1] - a[i]);
            totalWeight -= temp;
        }
        else if (i == n - 1)
        {
            int temp = abs(a[i] - a[i - 1]);
            totalWeight -= temp;
        }
        else
        {
            int temp = abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]) - abs(a[i + 1] - a[i - 1]);
            totalWeight -= temp;
        }
        ans = min(ans, totalWeight);
        totalWeight = curr;
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