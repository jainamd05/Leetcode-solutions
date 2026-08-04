class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        s = set(nums)
        low, high = min(nums), max(nums)
        return [x for x in range(low + 1, high) if x not in s]