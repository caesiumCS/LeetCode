class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int median = -1;
        while (left <= right) {
            median = (right + left) / 2;
            if (nums[median] == target) return median;
            if (nums[median] < target) {
                left = median + 1;
            } else {
                right = median - 1;
            }
        }
        return -1;
    }
};