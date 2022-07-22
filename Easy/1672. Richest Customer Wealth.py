class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        m = -1
        for l in accounts:
            w = 0
            for i in l:
                w += i
            if w > m:
                m = w
        return m
