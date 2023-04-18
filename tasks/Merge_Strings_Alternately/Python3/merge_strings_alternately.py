class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        minLen = min(len(word1), len(word2))
        res = ""
        for i in range(minLen):
            res += word1[i] + word2[i]
        if len(word1) < len(word2):
            res += word2[minLen:]
        else :
            res += word1[minLen:]
        return res