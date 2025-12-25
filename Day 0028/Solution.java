import java.util.HashMap;

class Solution {
    private static final HashMap<Character, Integer> romanMap = new HashMap<>();
    static {
        romanMap.put('I', 1);
        romanMap.put('V', 5);
        romanMap.put('X', 10);
        romanMap.put('L', 50);
        romanMap.put('C', 100);
        romanMap.put('D', 500);
        romanMap.put('M', 1000);
    }

    public int romanToInt(String s) {

        int result = 0;

        for (int i = 0; i < s.length(); i++) {

            int current = romanMap.get(s.charAt(i));

            if (i + 1 < s.length() && current < romanMap.get(s.charAt(i + 1))) {

                result -= current;
            } else {
                result += current;
            }
        }
        return result;
    }
}
