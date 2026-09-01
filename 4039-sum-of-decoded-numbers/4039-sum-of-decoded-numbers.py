class Solution:
    def sumDecoded(self, nums: list[int]) -> int:
        ans = 0
        MOD = 1_000_000_007
        for num in nums:
            width = num%10 
            d = floor(num/10)

            dup_s = str(d)
            x = int(dup_s[:width])
            y = int(dup_s[width:])

            ans = (ans + pow(x,y, MOD))%MOD
        return ans