// https://codeforces.com/contest/2224/problem/C
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
    string a, b;
    cin >> n >> a >> b;

    int balanceA = 0, balanceB = 0;
    for (int i = 0; i < n; i++)
    {
        char cA = a[i];
        char cB = b[i];
        if (cA == '(' && cB == '(')
        {
            balanceA++;
            balanceB++;
        }
        else if (cA == ')' && cB == ')')
        {
            balanceA--;
            balanceB--;
        }
        else // cA == ')' && cB == '('
        {
            if (balanceA < balanceB)
            {
                balanceA++;
                balanceB--;
            }
            else
            {
                balanceA--;
                balanceB++;
            }
        }

        if (balanceA < 0 || balanceB < 0)
            return void(cout << "NO" << el);
    }

    cout << (!balanceA && !balanceB ? "YES" : "NO") << el;
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