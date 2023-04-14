class Solution:
    def jump(self, nums: List[int]) -> int:
        distances = [-1]*len(nums)
        distances[0] = 0
        for i in range(len(nums)):
            for j in range(1, nums[i] + 1):
                if i + j >= len(nums):
                    break
                if distances[i + j] == -1:
                    distances[i + j] = distances[i] + 1
                else:
                    distances[i + j] = min(distances[i + j], distances[i] + 1)
        return distances[-1]