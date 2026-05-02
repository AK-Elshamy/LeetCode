#include <string>
#include <unordered_map>

class Solution
{
public:
    
    bool canConstruct(string ransomNote, string magazine)
    {
        // Early return if ransomNote is longer than magazine
        if (ransomNote.length() > magazine.length())
        {
            return false;
        }

        // Use a single map to store character frequencies
        unordered_map<char, int> charCount;

        // Count characters in magazine
        for (const char &c : magazine)
        {
            charCount[c]++;
        }

        // Check if we have enough characters for ransomNote
        for (const char &c : ransomNote)
        {
            // If character not found or count is 0, return false
            if (charCount[c] == 0)
            {
                return false;
            }
            // Decrement the count as we use this character
            charCount[c]--;
        }

        return true;
    }
};
