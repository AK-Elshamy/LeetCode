import java.util.*;

class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        // Count frequency of each element
        Map<Integer, Integer> mp = new HashMap<>();
        for (int num : nums)
            mp.put(num, mp.getOrDefault(num, 0) + 1);

        // Max heap based on frequency (value of map entries)
        PriorityQueue<Map.Entry<Integer, Integer>> maxHeap =
            new PriorityQueue<>((a, b) -> b.getValue() - a.getValue());

        // Add all frequency entries to the max heap
        maxHeap.addAll(mp.entrySet());

        // Extract top k frequent elements
        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = maxHeap.poll().getKey();
        }

        return result;
    }
}
