class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        n , m = len(grid), len(grid[0])
        ans = []

        for i in range(n):
            for j in range(m):
                ans.append(grid[i][j])
        
        k %= n*m
        ans = ans[-k:] + ans[:-k]

        t = 0
        for i in range(n):
            for j in range(m):
                grid[i][j] = ans[t]
                t += 1
        
        return grid