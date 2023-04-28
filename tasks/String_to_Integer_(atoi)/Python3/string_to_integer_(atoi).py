class Solution:

    MAX_CONST = 2**31 - 1
    MIN_CONST = -(2**31)

    def cutAnswer(self, s):
        if len(s) == 0 or s == '-':
            return 0
        val = int(s)
        if val <= self.MAX_CONST and val >= self.MIN_CONST:
            return val
        if val > self.MAX_CONST:
            return self.MAX_CONST
        return self.MIN_CONST

    def myAtoi(self, s: str) -> int:
        result = ""
        isDigitMode = False
        for i in range(len(s)):
            if s[i] == ' ':
                if not isDigitMode:
                    continue
                else:
                    return self.cutAnswer(result)
            
            elif s[i].isalpha() or s[i] == '.' or s[i] == '+':
                if isDigitMode:
                    return self.cutAnswer(result)
                elif s[i] == '+' and i < len(s) - 1 and s[i+1].isdecimal():
                    continue
                return 0
            
            elif s[i].isdecimal():
                if not isDigitMode:
                    isDigitMode = True
                result += s[i]
            
            elif s[i] == '-':
                if not isDigitMode:
                    result += s[i]
                    isDigitMode = True
                else:
                    return self.cutAnswer(result)
        return self.cutAnswer(result)
