class Solution:
    def decodeString(self, s: str) -> str:
        
        intstack = []
        charstack = []

        num = 0

        for ch in s:

            if ch.isdigit():
                num = num * 10 + int(ch)

            elif ch == '[':
                intstack.append(num)
                charstack.append(ch)
                num = 0

            elif ch == ']':
                k = intstack.pop()

                temp = ""
                while charstack[-1] != '[':
                    temp = charstack.pop() + temp

                charstack.pop()      # remove '['
                charstack.append(temp * k)

            else:
                charstack.append(ch)

        return "".join(charstack)