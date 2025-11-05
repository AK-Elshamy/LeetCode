#include <string>
using namespace std;

class Solution
{
public:
    bool is_pal(string s, int l, int r)
    {
        if (l >= r)
            return true;
        return (s[l] == s[r] && is_pal(s, l + 1, r - 1));
    }
    bool isPalindrome(int x)
    {
        return is_pal(to_string(x), 0, to_string(x).size() - 1);
    }
};