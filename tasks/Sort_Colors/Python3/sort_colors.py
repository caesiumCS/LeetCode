class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero = 0
        one = 0
        two = len(nums) - 1
        while one <= two:
            if nums[one] == 1:
                one += 1
            elif nums[one] == 0:
                nums[one], nums[zero] = nums[zero], nums[one]
                zero += 1
                one += 1
            else:
                nums[one], nums[two] = nums[two], nums[one]
                two -= 1