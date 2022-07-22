int maxProduct(vector<int>& nums) {
    int ans = nums[0];
    if (nums.size() == 0)
        return 0;
    else if (nums.size() == 1)
        return nums[0];

    vector<int> DPmax;
    vector<int> DPmin;
    DPmax.push_back(nums[0]);
    DPmin.push_back(nums[0]);
    for (int i=1; i<nums.size(); i++)
    {
        int newDPmax = max(nums[i], max(DPmax[i-1] * nums[i], DPmin[i-1] * nums[i]));
        if (ans < newDPmax)
            ans = newDPmax;
        DPmax.push_back(newDPmax);
        DPmin.push_back(min(nums[i], min(DPmax[i-1] * nums[i], DPmin[i-1] * nums[i])));
    }
    return ans;

}
