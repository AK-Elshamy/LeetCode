// problem linK : https://codeforces.com/contest/2144/problem/A
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

int mod3(int x)
{
    return x % 3;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    for (int i = 1; i < n; ++i)
        v[i] += v[i - 1];

    for (int l = 1; l < n; ++l)
    {
        for (int r = l + 1; r < n; ++r)
        {

            int mLeft = mod3(v[l - 1]);
            int mMid = mod3(v[r - 1] - v[l - 1]);
            int mRight = mod3(v[n - 1] - v[r - 1]);
            // allEqual or AllNonEqual
            if ((mLeft == mMid && mMid == mRight && mLeft == mRight) || (mLeft != mMid && mMid != mRight && mLeft != mRight))
            {
                cout << l << ' ' << r << el;
                return;
            }
        }
    }

    cout << "0 0" << el;
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