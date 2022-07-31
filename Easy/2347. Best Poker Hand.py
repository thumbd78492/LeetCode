class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        flush = True
        for i in range(1, 5):
            if suits[i] != suits[0]:
                flush = False
                break
        if flush:
            return "Flush"
        
        carNums = 0
        nums = [0] * 14
        for r in ranks:
            nums[r] += 1
            if carNums < nums[r]:
                carNums = nums[r]
        
        if carNums >= 3:
            return "Three of a Kind"
        elif carNums == 2:
            return "Pair"
        return "High Card"
