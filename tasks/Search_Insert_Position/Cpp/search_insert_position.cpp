class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int median;

        while (left <= right) {
            median = (right + left) / 2;
            if (nums[median] == target) {
                return median;
            }

            if (target < nums[median]) {
                right = median - 1;
            }

            if (target > nums[median]) {
                left = median + 1;
            }

        }

        if (nums[median] < target) {
            return median + 1;
        } return median;
    }
};