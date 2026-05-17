// https://codeforces.com/contest/2228/problem/D
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

    vector<pair<int, int>> pts(n);
    vector<int> Y(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pts[i].first >> pts[i].second;
        Y[i] = pts[i].second;
    }

    sort(pts.begin(), pts.end());

    sort(Y.begin(), Y.end());
    Y.erase(unique(Y.begin(), Y.end()), Y.end());

    vector<pair<int, pair<int, int>>> mp;

    for (int i = 0; i < n; i++)
    {
        int x = pts[i].first;
        int y = pts[i].second;

        if (mp.empty() || mp.back().first != x)
        {
            mp.push_back({x, {y, y}});
        }
        else
        {
            mp.back().second.first = max(mp.back().second.first, y);
            mp.back().second.second = min(mp.back().second.second, y);
        }
    }

    int sz = mp.size();

    if (sz < 2)
    {
        cout << 0 << el;
        return;
    }

    vector<pair<int, pair<int, int>>> prefixY = mp;
    vector<pair<int, pair<int, int>>> suffixY = mp;

    for (int l = 1, r = sz - 2; l < sz; l++, r--)
    {
        // prefix
        prefixY[l].second.first =
            max(prefixY[l].second.first,
                prefixY[l - 1].second.first);

        prefixY[l].second.second =
            min(prefixY[l].second.second,
                prefixY[l - 1].second.second);

        // suffix
        suffixY[r].second.first =
            max(suffixY[r].second.first,
                suffixY[r + 1].second.first);

        suffixY[r].second.second =
            min(suffixY[r].second.second,
                suffixY[r + 1].second.second);
    }

    ll ans = 0;

    for (int i = 0; i < sz - 1; ++i)
    {
        auto itRight = suffixY[i + 1];
        auto itLeft = prefixY[i];

        int maxRightY = itRight.second.first;
        int minRightY = itRight.second.second;

        int maxLeftY = itLeft.second.first;
        int minLeftY = itLeft.second.second;

        int MAXUPY = min(maxRightY, maxLeftY);
        int MAXDOWNY = max(minRightY, minLeftY);

        if (MAXDOWNY > MAXUPY)
            continue;

        ll count = upper_bound(Y.begin(), Y.end(), MAXUPY) - lower_bound(Y.begin(), Y.end(), MAXDOWNY);
        ans += (count - 1);
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