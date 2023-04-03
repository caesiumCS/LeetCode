class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxSize = 0;
        set<char> charSet;

        while (right < s.size()) {
            if (charSet.count(s[right])) {
                charSet.erase(s[left]);
                left++;
            } else {
                charSet.insert(s[right]);
                right++;
                maxSize = charSet.size() > maxSize ? charSet.size() : maxSize;
            }
        }

        return maxSize;
    }