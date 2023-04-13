class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int targetIndex = -1;
        int mid = 0;
        while (left <= right) {
            mid = (right + left) / 2;
            cout << mid << "\n";
            if (nums[mid] == target) {
                targetIndex = mid;
                break;
            }
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (targetIndex == -1) {
            return {-1, -1};
        }
        left = targetIndex;
        right = targetIndex;
        while (left > 0) {
            if (nums[left - 1] == target) {
                left--;
            } else {
                break;
            }
        }
        while (right < nums.size() - 1) {
            if (nums[right + 1] == target) {
                right++;
            } else {
                break;
            }
        }
        return {left, right};
    }
};