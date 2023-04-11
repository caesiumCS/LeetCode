class Solution {
public:

    void getPermute(vector<int> possibleCandidate, vector<int>& nums, vector<vector<int>>& result, int elemenToAdd) {
        possibleCandidate.push_back(elemenToAdd);
        if (possibleCandidate.size() == nums.size()) {
            result.push_back(possibleCandidate);
            return;
        }
        for (int el : nums) {
            if (find(possibleCandidate.begin(), possibleCandidate.end(), el) == possibleCandidate.end()) {
                getPermute(possibleCandidate, nums, result, el);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> candidate;
        for (int el : nums) {
            getPermute(candidate, nums, result, el);
        }
        return result;
    }
};