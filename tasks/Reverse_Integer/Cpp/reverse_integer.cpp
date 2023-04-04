class Solution {
public:
    int reverse(int x) {
        long result = 0;
        bool isNegative = false;
        long copy = x;
        if (copy < 0) {
            isNegative = true;
            copy *= -1;
        }
        
        while (copy != 0) {
            result = result * 10 + copy % 10;
            copy /= 10;
        }

        if (isNegative) {
            result *= -1;
        }

        if (result > INT_MAX || result < INT_MIN) {
            return 0;
        } 
        return result;
    }
};