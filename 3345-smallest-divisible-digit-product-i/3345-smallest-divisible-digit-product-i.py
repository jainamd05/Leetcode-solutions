class Solution:
    def smallestNumber(self, n: int, t: int) -> int:

        def check(n):
            pro = 1
            s = str(n)
            for i in s: 
                pro *= int(i)
                if i == '0': break
            
            return pro%t == 0
        
        while not check(n):
            n += 1
        return n