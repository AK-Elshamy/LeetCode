// problem link: https://codeforces.com/contest/2122/problem/B
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
    ll ans = 0;

    while (n--)
    {
        int zero, Tzero, one, Tone;
        cin >> zero >> one >> Tzero >> Tone;

        ans += max(0, zero - Tzero);
        if (one > Tone)
        {
            ans += min(zero, Tzero) + (one - Tone);
        }
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