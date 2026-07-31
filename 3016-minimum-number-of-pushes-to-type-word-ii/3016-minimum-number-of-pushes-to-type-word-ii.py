class Solution:
    def minimumPushes(self, word: str) -> int:
        from collections import Counter
        
        freq = sorted(Counter(word).values(), reverse=True)

        ans = 0
        for i, f in enumerate(freq):
            ans += f * (i // 8 + 1)

        return ans