class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        chars = list(chars)
        
        ans = 0
        for word in words :
            dup_chars = chars.copy()

            cnt = 0 ; delete = False

            for letter in word :
                if letter in dup_chars : 
                    cnt += 1
                    dup_chars.remove(letter)
                else : delete = True ; break
            
            if not delete : ans += cnt

        return ans
                