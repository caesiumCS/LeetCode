class Solution:
    def bulbSwitch(self, n: int) -> int:
        res = 0
        for i in range(1, n+1):
            if i * i < n + 1:
                res += 1
            else:
                break
        return res