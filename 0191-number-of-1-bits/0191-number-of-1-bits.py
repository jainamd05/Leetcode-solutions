class Solution:
    def hammingWeight(self, n: int) -> int:
        bit = bin(n)
        return bit.count("1")