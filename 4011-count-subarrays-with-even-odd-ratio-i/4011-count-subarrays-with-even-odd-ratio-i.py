class Solution:
    def countRatioSubarrays(self, nums: list[int], a: int, b: int) -> int:
        RATIO = a/b

        n = len(nums)
        ans = 0
        for i in range(n):
            even , odd = 0, 0
            for j in range(i, n):
                if nums[j]%2 == 0: even += 1
                else : odd += 1

                if odd and (even/odd) <= RATIO: ans += 1
        return ans