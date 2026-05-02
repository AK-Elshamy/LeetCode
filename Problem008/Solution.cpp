#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int lengthAfterTransformations(string s, int t)
    {
        const int MOD = 1e9 + 7;
        vector<long long> freq(26, 0); // Count each letter

        // Count initial frequencies
        for (char ch : s)
        {
            freq[ch - 'a']++;
        }

        long long len = s.length();

        // Perform t transformations
        while (t--)
        {
            long long z_count = freq[25]; // Count 'z's
            len = (len + z_count) % MOD;  // Update length

            // Shift frequencies from back to front
            for (int i = 25; i > 0; i--)
            {
                freq[i] = freq[i - 1];
            }

            // Handle 'z' → "ab" transformation
            freq[0] = z_count;                   // 'a's from "ab"
            freq[1] = (freq[1] + z_count) % MOD; // 'b's from "ab"
        }

        return len;
    }
};