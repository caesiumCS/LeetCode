func twoSum(nums []int, target int) []int {
	dict := make(map[int]int)
	for i := 0; i < cap(nums); i++ {
		if value, ok := dict[target-nums[i]]; ok {
			return []int{value, i}
		}
		dict[nums[i]] = i
	}

	return nil
}