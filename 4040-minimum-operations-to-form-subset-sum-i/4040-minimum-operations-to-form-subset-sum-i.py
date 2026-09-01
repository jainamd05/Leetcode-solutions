class Solution:
    def minOperations(self, nums: list[int], sum: int) -> int:
        INF = float("inf")
        dp = [INF]*(sum+1)

        dp[0] = 0
        for num in nums:
            select = {}

            # multiplication
            val, cost = num, 0
            while val <= sum :
                if ((val not in select) or (cost < select[val])):
                    select[val] = cost
                val *= 2 ; cost += 1
                    
            # division
            val, cost = num//2, 1
            while val > 0 :
                if ((val not in select) or (cost < select[val])):
                    select[val] = cost
                val //= 2 ; cost += 1

            dup_dp = list(dp)
            for val, cost in select.items():
                for i in range(val, sum+1):
                    if dp[i-val] + cost < dup_dp[i] :
                        dup_dp[i] = dp[i-val] + cost

            dp = dup_dp 
        return dp[sum] if dp[sum] != INF else -1