// https://codeforces.com/contest/2143/problem/B
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

    int products, vouchers;
    cin >> products >> vouchers;
    vector<int> product_prices(products), voucher_discounts(vouchers);
    for (auto &price : product_prices)
        cin >> price;
    for (auto &discount : voucher_discounts)
        cin >> discount;

    sort(product_prices.rbegin(), product_prices.rend());
    sort(voucher_discounts.begin(), voucher_discounts.end());

    int idxProduct = 0, idxDiscount = 0;
    ;
    ll total_cost = 0;
    set<int> skep;
    while (idxProduct < products && idxDiscount < vouchers)
    {

        idxProduct += voucher_discounts[idxDiscount++];
        skep.insert(idxProduct - 1);
    }
    for (int i = 0; i < products; ++i)
    {
        if (skep.count(i) == 0)
            total_cost += product_prices[i];
    }
    cout << total_cost << el;
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