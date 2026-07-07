class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x = str(n)
        s = "" ; ans = 0
        for i in x :
            if int(i) != 0 :
                ans += int(i)
                s += i
        if s : return int(s)*ans
        return ans