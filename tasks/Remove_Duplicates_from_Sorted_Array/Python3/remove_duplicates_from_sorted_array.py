class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        dublicates = dict()
        left = 0
        right = 0
        while right < len(nums):
            if dublicates.get(nums[right]) is None:
                nums[left] = nums[right]
                dublicates[nums[right]] = 0
                left += 1
            right += 1
        return left