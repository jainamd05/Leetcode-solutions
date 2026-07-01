class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        arr = []
        for start, end in intervals:
            if len(arr)==0 or arr[-1][1] + 1 <= start: arr.append([start, end]) 
            else: arr[-1][1] = max(arr[-1][1], end) 
        return arr