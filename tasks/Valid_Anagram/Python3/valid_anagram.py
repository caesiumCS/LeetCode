class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        table = dict()
        for el in s:
            if table.get(el) is None:
                table[el] = 0
            table[el] += 1
        for el in t:
            if table.get(el) is None:
                return False
            else:
                table[el] -= 1
                if table[el] == 0:
                    del table[el]
        return len(list(table.keys())) == 0