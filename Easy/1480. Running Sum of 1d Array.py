class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sums = []
        k = 0
        for i in nums:
            k += i
            sums.append(k)
        return sums
