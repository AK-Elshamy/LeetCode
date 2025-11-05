/**
 * Solution for LeetCode 75: Sort Colors
 * Uses Dutch National Flag Algorithm (Three Pointers)
 */
class Solution {

    public void sortColors(int[] nums) {
        int n = nums.length;
        int low = 0, high = n - 1, mid = 0;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums, mid, low);
                ++mid;
                ++low;
            } else if (nums[mid] == 1) {
                ++mid;
            } else { // nums[mid] == 2
                swap(nums, mid, high);
                --high;
            }
        }
    }

    /**
     * Swaps two elements in the array
     * 
     * @param arr Array containing elements to swap
     * @param i   First index
     * @param j   Second index
     */
    private void swap(int[] arr, int i, int j) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
}