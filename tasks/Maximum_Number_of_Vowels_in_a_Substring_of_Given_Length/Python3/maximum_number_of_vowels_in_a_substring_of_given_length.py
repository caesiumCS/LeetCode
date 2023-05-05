class Solution:
    VOWELS = set('euioa')

    def maxVowels(self, s: str, k: int) -> int:
        result = 0
        best = -1

        for i in range(k):
            if s[i] in self.VOWELS:
                result += 1
        
        best = max(result, best)
        
        for i in range(k, len(s)):
            if s[i - k] in self.VOWELS:
                result -= 1
            if s[i] in self.VOWELS:
                result += 1
            best = max(result, best)

        return best