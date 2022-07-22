void sortColors(vector<int>& nums) {
    int count[3] = {0,0,0};
    for (int i=0; i<nums.size(); i++)
        count[nums[i]]++;
    int cc = 0;
    for (int i=0; i<3; i++)
        for (int j=0; j<count[i]; j++)
            nums[cc++] = i;
    return;
}
