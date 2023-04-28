class Solution:
    def getInt(self, s):
        val = 0
        power = 0
        for i in range(len(s) - 1, -1, -1):
            val += 10**power * (ord(s[i]) - ord('0'))
            power += 1
        return val

    def multiply(self, num1: str, num2: str) -> str:
        return str(self.getInt(num1) * self.getInt(num2))