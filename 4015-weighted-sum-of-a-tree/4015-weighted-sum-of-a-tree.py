class Solution:
    def weightedSum(self, parent: list[int], nums: list[int]) -> int:
        n = len(nums)

        childs = [[] for _ in range(n)]
        for i in range(1, n):
            childs[parent[i]].append(i)

        depth = [0 for _ in range(n)]
        depth[0] = 1

        h = 1 ; s = [0]

        while s:
            node = s.pop()

            for child in childs[node]:
                depth[child] = depth[node] + 1
                h = max(h, depth[child])
                s.append(child)


        weighted_sum = 0
        for i in range(n):
            weighted_sum += (nums[i] * (h - depth[i] + 1))
        return weighted_sum
        