// https://codeforces.com/contest/2228/problem/C2
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

ll build(ll b, ll limit, int val)
{
    while (limit--)
    {
        b = b * 10 + val;
    }
    return b;
}

void chooseDigit(ll prefix, int d, int rem_len, int minDigit, int maxDigit, ll a, ll &ans, const vector<int> &digits)
{
    auto low = lower_bound(digits.begin(), digits.end(), d);
    auto up = upper_bound(digits.begin(), digits.end(), d);

    if (low != digits.begin())
    {
        ll take = prefix * 10 + *(--low);
        take = build(take, rem_len, maxDigit);
        ans = min(ans, abs(take - a));
    }
    if (up != digits.end())
    {
        ll take = prefix * 10 + *up;
        take = build(take, rem_len, minDigit);
        ans = min(ans, abs(take - a));
    }
}

void solve()
{
    string s;
    int n;
    cin >> s >> n;
    vector<int> digits(n), mp(10, 0);
    for (auto &d : digits)
    {
        cin >> d;
        mp[d]++;
    }
    bool ok = true;
    for (auto &c : s)
        ok &= mp[c - '0'] > 0;
    if (ok)
        return void(cout << 0 << el);

    int minDigit = digits[0];
    int maxDigit = digits[n - 1];
    int sz = s.size();
    ll b = 0, a = stoll(s);

    ll Low = build(0, sz + 1, minDigit);
    if (Low == 0LL && n > 1)
    {
        Low = build(digits[1], sz, 0);
    }

    ll high = build(0, sz - 1 + (sz == 1), maxDigit);
    ll ans = min(abs(a - Low), abs(a - high));

    for (int i = 0; i < sz; i++)
    {
        int d = s[i] - '0';

        chooseDigit(b, d, sz - i - 1, minDigit, maxDigit, a, ans, digits);

        if (!mp[d])
        {
            break;
        }
        b = b * 10 + d;
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