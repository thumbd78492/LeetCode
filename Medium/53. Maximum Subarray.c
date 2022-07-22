#define max(a,b) ((a>b)?a:b)

int maxSubArray(int* nums, int numsSize){
    int ans = nums[0];
    for (int i=1; i<numsSize; i++) {
        nums[i] = max(nums[i-1]+nums[i], nums[i]);
        if (nums[i] > ans)
            ans = nums[i];
    }

    return ans;
}
