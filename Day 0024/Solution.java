class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        List<Integer> result = new ArrayList<>();
        int len = words.length;
        for (int i = 0; i < len; ++i) {
            String s = words[i];
            boolean is_found = s.contains(s.valueOf(x));
            if (is_found)
                result.add(i);
        }
        return result;
    }
}