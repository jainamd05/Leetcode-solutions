class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        cnt = {'a':0, 'b':0, 'c':0}
        left = 0 ; ans = 0

        n = len(s)
        for i in range(n):
            cnt[s[i]] += 1

            while cnt['a'] and cnt['b'] and cnt['c']:
                ans += n-i
                cnt[s[left]] -= 1
                left += 1
        
        return ans