class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        ans = ["."]*len(s)
        cnt = 0
        for i in indices:
            ans[i] = s[cnt]
            cnt += 1 
        return "".join(ans)