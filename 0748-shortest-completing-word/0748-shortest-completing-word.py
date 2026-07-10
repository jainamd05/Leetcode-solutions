class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        licensePlate = licensePlate.lower()

        need = {}
        for ch in licensePlate:
            if ch.isalpha():
                need[ch] = need.get(ch, 0) + 1

        ans = ""
        for word in words:
            ok = True
            for ch, cnt in need.items():
                if word.count(ch) < cnt:
                    ok = False
                    break

            if ok and (ans == "" or len(word) < len(ans)):
                ans = word

        return ans