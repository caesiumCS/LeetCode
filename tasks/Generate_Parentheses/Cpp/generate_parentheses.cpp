class Solution {
public:

    void generateOneSequence(int n, 
                            int opened, 
                            int closed,
                            string currentString, 
                            vector<string>& result) {
        if (opened == closed && opened == n) {
            result.push_back(currentString);
            return;
        }

        if (opened == n) {
            generateOneSequence(n, opened, closed + 1, currentString + ')', result);
        } else if (opened == closed) {
            generateOneSequence(n, opened + 1, closed, currentString + '(', result);
        } else {
            generateOneSequence(n, opened + 1, closed, currentString + '(', result);
            generateOneSequence(n, opened, closed + 1, currentString + ')', result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateOneSequence(n, 0, 0, "", result);
        return result;
    }
};