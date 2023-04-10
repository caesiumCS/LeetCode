class Solution {
public:
    bool checkRow(vector<char>& row) {
        set<char> s;
        for (char c : row) {
            if (c != '.' && s.find(c) != s.end()) {
                return false;
            }
            if (c != '.') {
                s.insert(c);
            }
        }
        return true;
    }

    bool checkColumn(vector<vector<char>>& board, int indColumn) {
        set<char> s;
        for (int i = 0; i < 9; i++) {
            char c = board[i][indColumn];
            if (c != '.' && s.find(c) != s.end()) {
                return false;
            }
            if (c != '.') {
                s.insert(c);
            }
        }
        return true;
    }

    bool checkSquare(vector<vector<char>>& board, int indRow, int indColumn) {
        set<char> s;
        for (int i = indRow; i < indRow + 3; i++) {
            for (int j = indColumn; j < indColumn + 3; j++) {
                char c = board[i][j];
                if (c != '.' && s.find(c) != s.end()) {
                    return false;
                }
                if (c != '.') {
                    s.insert(c);
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        bool result = true;
        for (int i = 0; i < 9; i++) {
            result &= checkRow(board[i]);
            result &= checkColumn(board, i);
        }
        if (!result) {
            return false;
        }
        for (int i = 0; i < 7; i += 3) {
            for (int j = 0; j < 7; j += 3) {
                result &= checkSquare(board, i, j);
            }
        }
        return result;
    }
};