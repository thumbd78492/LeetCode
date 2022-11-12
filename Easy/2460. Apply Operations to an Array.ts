function applyOperations(nums: number[]): number[] {
    let zeroCounter = 0
    let ret: number[] = new Array(nums.length).fill(0);
    let retCurr = 0
    for (let i=0; i<nums.length-1; i++) {
        // console.log(nums[i])
        if (nums[i] == 0) {
            zeroCounter++
        }
        else {
            if (nums[i] == nums[i+1]) {
                nums[i+1] = 0
                ret[retCurr] = nums[i]*2
                retCurr++
            }
            else {
                ret[retCurr] = nums[i]
                retCurr++
            }
        }
    }
    
    if (nums[nums.length-1] != 0) {
        ret[retCurr] = nums[nums.length-1]
    }
    
    
    return ret
};
