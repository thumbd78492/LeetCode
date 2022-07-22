class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        bList = []
        for i in range(n):
            bList.append(nums[i])
            bList.append(nums[n+i])
        return bList
