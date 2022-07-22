int majorityElement(int* nums, int numsSize){
    int count = 0;
    int candidate = -1;
    
    for (int i=0; i<numsSize; i++) {
        if (count == 0)
            candidate = nums[i];
        count += (nums[i]==candidate) ? 1 : -1;
    }
    
    return candidate;
}
