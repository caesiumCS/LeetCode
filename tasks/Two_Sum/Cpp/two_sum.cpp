class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> numToInd;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            const auto it = numToInd.find(target - nums[i]);
            if (it == numToInd.end()) {
                numToInd[nums[i]] = i;
            } else {
                result = {it->second, i};
                break;
            }
        }
        return result;
    }
};