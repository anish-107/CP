# Solution Class
class Solution:
    def twoSum(self, nums, target):
        sum = 0
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                sum = nums[i] + nums[j]
                if sum == target:
                    return [i, j]
        
        return []
    

# Driver Code
nums = [2, 7, 11, 15]
target = 9

sol = Solution()
print(sol.twoSum(nums, target))
