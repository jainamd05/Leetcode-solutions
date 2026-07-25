class Solution:
    def maxProduct(self, n: int) -> int:
        # n = str(n)

        # max_pro = 0
        # for i in range(len(n)-1):
        #     for j in range(i+1, len(n)):
        #         max_pro = max(max_pro, int(n[i])*int(n[j]))

        # return max_pro
        max1, max2 = sorted(str(n))[-2:]
        return int(max1)*int(max2)