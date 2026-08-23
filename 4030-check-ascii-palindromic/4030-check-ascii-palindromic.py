class Solution:
    def isPalindromic(self, s: str) -> bool:
        r = ""
        for letter in s:
            temp = ord(letter)
            r += format(temp, "08b")

        return r == r[::-1]