function maximumSubarraySum(nums: number[], k: number): number {
    let members = new Map<number, number>()
    let currSum = 0
    let ret = 0
    
    for (let i=0; i<k; i++) {
        if (members.has(nums[i])) {
            members.set(nums[i], members.get(nums[i])+1)
        }
        else {
            members.set(nums[i], 1)
        }
        currSum += nums[i]
    }
    if (members.size == k) {
        ret = currSum
    }
    
    for (let i=k; i<nums.length; i++) {
        // console.log(currSum, members)
        // Delete the first member
        let firstMember = nums[i-k]
        if (members.get(firstMember) == 1) {
            members.delete(firstMember)
        }
        else {
            members.set(firstMember, members.get(firstMember)-1)
        }
        currSum -= firstMember
        
        // Add the new member
        let newMember = nums[i]
        if (members.has(newMember)) {
            members.set(newMember, members.get(newMember)+1)
        }
        else {
            members.set(newMember, 1)
        }
        currSum += nums[i]
        
        if (members.size == k && currSum > ret) {
            ret = currSum
        }
    }
    return ret
};
