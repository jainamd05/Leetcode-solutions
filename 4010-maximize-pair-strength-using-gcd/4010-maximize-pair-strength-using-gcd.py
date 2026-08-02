class Solution:
    def maxPairStrength(self, nums: list[int]) -> int:
        import math

        ans = -1
        for i in range(len(nums)-1):
            for j in range(i+1, len(nums)):
                ans = max(ans, ((nums[i]*nums[j])//(math.gcd(nums[i],nums[j]))**2))
        return ans