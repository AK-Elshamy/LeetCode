import java.util.List;
import java.util.ArrayList;

class Solution {
    public List<String> getLongestSubsequence(String[] words, int[] groups) {
        List<String> ans = new ArrayList<>();
        int lastGroup = -1;
        for (int i = 0; i < words.length; ++i) {
            if (ans.isEmpty() || groups[i] != lastGroup) {
                ans.add(words[i]);
                lastGroup = groups[i];
            }
        }
        return ans;
    }
}