class Solution {
    public String lexGreaterPermutation(String s, String target) {

        StringBuilder answer = new StringBuilder();

        Map<Character, Integer> freq = s.chars()
                .mapToObj(c -> (char) c)
                .collect(Collectors.toMap(
                        ch -> ch,
                        ch -> 1,
                        Integer::sum
                ));

        char[] chars = s.toCharArray();
        Arrays.sort(chars);

        int i = 0;

        while (i < s.length()) {

            char cur = target.charAt(i);
            boolean found = false;

            for (char ch : chars) {

                int count = freq.getOrDefault(ch, 0);

                if (count > 0 && ch >= cur) {

                    answer.append(ch);
                    freq.merge(ch, -1, Integer::sum);

                    if (ch > cur) {
                        for (char rest : chars) {
                            while (freq.getOrDefault(rest, 0) > 0) {
                                answer.append(rest);
                                freq.merge(rest, -1, Integer::sum);
                            }
                        }

                        return answer.toString();
                    }

                    i++;
                    found = true;
                    break;
                }
            }

            if (!found) {
                break;
            }
        }

        while (answer.length() > 0) {

            int pos = answer.length() - 1;

            char removed = answer.charAt(pos);
            answer.deleteCharAt(pos);

            freq.merge(removed, 1, Integer::sum);

            char cur = target.charAt(pos);

            for (char ch : chars) {

                if (ch > cur && freq.getOrDefault(ch, 0) > 0) {

                    answer.append(ch);
                    freq.merge(ch, -1, Integer::sum);

                    for (char rest : chars) {
                        while (freq.getOrDefault(rest, 0) > 0) {
                            answer.append(rest);
                            freq.merge(rest, -1, Integer::sum);
                        }
                    }

                    return answer.toString();
                }
            }
        }

        return "";
    }
}