class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        m = max(candies)
        res = []
        for el in candies:
            res.append(el + extraCandies >= m)
        return res