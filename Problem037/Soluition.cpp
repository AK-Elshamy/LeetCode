using ll = long long;
class Solution
{
public:
    ll countSubarrays(vector<int> &A, int k)
    {
        int n = A.size();
        int mx = *max_element(A.begin(), A.end());
        int left = 0, count = 0;
        ll ans = 0;

        for (int right = 0; right < n; ++right)
        {
            if (A[right] == mx)
            {
                count++;
            }

            while (count >= k)
            {
                if (A[left] == mx)
                {
                    count--;
                }
                left++;
            }

            ans += left;
        }

        return ans;
    }
};