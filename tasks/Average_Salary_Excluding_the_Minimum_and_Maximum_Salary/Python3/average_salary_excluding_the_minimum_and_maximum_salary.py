class Solution:
    def average(self, salary: List[int]) -> float:
        global_min = min(salary[0], salary[1])
        global_max = max(salary[0], salary[1])

        final_sum = 0
        for i in range(2, len(salary)):
            if salary[i] > global_max:
                final_sum += global_max
                global_max = salary[i]
            elif salary[i] < global_min:
                final_sum += global_min
                global_min = salary[i]
            else:
                final_sum += salary[i]
        
        return final_sum/(len(salary) - 2)