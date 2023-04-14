class Solution:
    def findFirst(self, nums, val):
        for i in range(len(nums)):
            if nums[i] == val:
                return i
        return -1

    def removeElement(self, nums: List[int], val: int) -> int:
        left = right = self.findFirst(nums, val)
        if left == -1:
            return len(nums)
        while right < len(nums):
            if nums[right] != val:
                nums[left] = nums[right]
                left += 1
            right += 1
        return left
