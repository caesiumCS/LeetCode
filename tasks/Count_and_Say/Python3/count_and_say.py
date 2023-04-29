class Solution:
    def getNewString(self, s: str) -> str:
        res = ''
        currentSym = s[0]
        number = 1
        for i in range(1, len(s)):
            if s[i] == currentSym:
                number += 1
            else:
                res += str(number) + currentSym
                currentSym = s[i]
                number = 1
        res += str(number) + currentSym
        return res
        
    def countAndSay(self, n: int) -> str:

        string = '1'
        for _ in range(2, n + 1):
            string = self.getNewString(string)
        return string