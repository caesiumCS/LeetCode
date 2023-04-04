class Solution {
public:
    map<char, vector<char>> DIGIT_TO_SYMBOL = {
        {'2', {'a', 'b', 'c'}}, 
        {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}},
    };

    void recursiveCall(const string& digits, 
                    const int ind, 
                    string currentString, 
                    vector<string>& result) {
        if (ind == digits.size()) {
            result.push_back(currentString);
            return;
        }    

        for (const auto sym : DIGIT_TO_SYMBOL[digits[ind]]) {
            recursiveCall(digits, ind + 1, currentString + sym, result);
        }   
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) {
            return result;
        }
        recursiveCall(digits, 0, "", result);
        return result;
    }
};