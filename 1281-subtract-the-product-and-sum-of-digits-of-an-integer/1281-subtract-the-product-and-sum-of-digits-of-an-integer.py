class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        n = str(n)
        pro = 1 ; add = 0
        for i in n:
            pro *= int(i)
            add += int(i)
        return pro-add