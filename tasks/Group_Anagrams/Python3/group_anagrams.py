class Solution:
            
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = []
        sorted_els = []
        for s in strs:
            sorted_s = sorted(s)
            b = True
            for i in range(len(res)):
                if sorted_els[i] == sorted_s:
                    b = False
                    res[i].append(s)
                    break
            if b:
                res.append([s])
                sorted_els.append(sorted_s)
        return res