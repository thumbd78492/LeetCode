class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        calc = []
        curr = 0
        for i in nums:
            # print(i, calc)
            if i == 0:
                curr += 1
            elif curr > 0:
                calc.append(curr)
                curr = 0
        if curr > 0:
            calc.append(curr)
        
        ret = 0
        for i in calc:
            ret += (1+i)*i/2

        return int(ret)
