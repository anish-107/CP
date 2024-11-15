# Two Sum
class Solution:
    def twoSum(self, nums, target):
        solution_map = {}

        for i, n in enumerate(nums):
            diff = target - n

            if diff in solution_map:
                return [solution_map[diff], i]

            solution_map[n] = i
        
        return