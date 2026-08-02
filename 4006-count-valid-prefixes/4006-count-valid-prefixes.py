class Solution:
    def countValidPrefixes(self, s: str) -> int:
        ans = 0
        one , zero = 0, 0
        for i in s:
            if i == "0" : zero += 1
            else : one += 1

            if abs(one-zero) <= 1: ans += 1
        return ans
            