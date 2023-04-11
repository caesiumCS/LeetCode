class Solution:
    def removeStars(self, s: str) -> str:
        stack = list()
        for i in range(len(s)):
            if s[i] == '*':
                stack.pop()
            else:
                stack.append(i)
        res = ""
        for ind in stack:
            res += s[ind]
        return res