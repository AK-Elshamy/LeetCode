// problem linK: https://codeforces.com/contest/2155/problem/A
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

int calc(int n)
{
    return n / 2;
}
void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    int loser = 0, winner = n;
    while (winner > 1 || loser > 1)
    {
        ans += calc(winner);
        int w = winner;
        winner = winner / 2 + (winner & 1);
        int clcLoser = calc(loser);
        if (clcLoser > 0)
        {
            ans += clcLoser;
            loser = loser / 2 + (loser & 1) + w / 2;
        }
        else
        {
            loser += w / 2;
        }
    }
    cout << ans + 1 << el;
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