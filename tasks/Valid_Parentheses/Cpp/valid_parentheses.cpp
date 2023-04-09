class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                myStack.push(c);
            } else if (c == ')') {
                if (!myStack.empty() && myStack.top() == '(') {
                    myStack.pop();
                } else {
                    return false;
                }
            } else if (c == '}') {
                if (!myStack.empty() && myStack.top() == '{') {
                    myStack.pop();
                } else {
                    return false;
                }
            } else {
                if (!myStack.empty() && myStack.top() == '[') {
                    myStack.pop();
                } else {
                    return false;
                }
            }
        }

        return myStack.empty();
    }
};