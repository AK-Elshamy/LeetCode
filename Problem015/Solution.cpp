// "صلي على النبي"
// "One day, the sun will rise."

#include <bits/stdc++.h>
#include <ranges>
using namespace std;

bool Can_Split_With_MEX(const vector<int> &a, int x, int k)
{
    if (x == 0)
        return true;

    vector<int> freq(x, 0);
    int cur_mex = 0, segments = 0;

    for (const auto &num : a)
    {
        if (num < x)
            freq[num]++;
        while (cur_mex < x && freq[cur_mex] > 0)
            ++cur_mex;

        if (cur_mex == x)
        {
            segments++;
            if (segments == k)
                return true;
            fill(freq.begin(), freq.end(), 0);
            cur_mex = 0;
        }
    }

    return segments >= k;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int low = 0, high = n + 1, answer = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (Can_Split_With_MEX(a, mid, k))
        {
            answer = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << answer << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int _ = 0; _ < t; ++_)
    {
        solve();
    }

    return 0;
}
