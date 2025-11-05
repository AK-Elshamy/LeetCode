
// "صلي على النبي"
// "One day, the sun will rise."
import java.util.*;

public class MaximizeMinMEX {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), k = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = sc.nextInt();

            System.out.println(findMaxMEX(a, k));
        }
    }

    private static int findMaxMEX(int[] a, int k) {
        int left = 0, right = a.length, answer = 0;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (canSplit(a, k, mid)) {
                answer = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return answer;
    }

    private static boolean canSplit(int[] a, int k, int mexTarget) {
        boolean[] seen = new boolean[mexTarget];
        int count = 0, seenCount = 0;

        for (int value : a) {
            if (value < mexTarget && !seen[value]) {
                seen[value] = true;
                seenCount++;
            }

            if (seenCount == mexTarget) {
                count++;
                if (count == k)
                    return true;
                Arrays.fill(seen, false);
                seenCount = 0;
            }
        }

        return count >= k;
    }
}
