class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        list_map = dict()
        for i in range(len(nums)):
            if list_map.get(target - nums[i]) is None:
                list_map[nums[i]] = i
            else:
                return [list_map[target - nums[i]], i]