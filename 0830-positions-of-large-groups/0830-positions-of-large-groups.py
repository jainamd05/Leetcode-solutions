class Solution:
    def largeGroupPositions(self, s: str) -> List[List[int]]:
        arr = []
        start, end = 0, 0
        i = 0
        while i < len(s)-1 :
            i += 1
            if s[i] == s[i-1] :
                end = i
            else :
                if end-start >= 2  :
                    arr.append([start, end])
                start = end = i

        if end - start >= 2: arr.append([start, end])

        # print(arr)
        return arr