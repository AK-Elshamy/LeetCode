#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> result;
        int len = words.size();
        for (int i = 0; i < len; ++i)
        {
            string s = words[i];
            if (s.find(x) != string::npos)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
