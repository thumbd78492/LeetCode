int findNumbers(vector<int>& nums) {
    int ans = 0;
    for (int i=0; i<nums.size(); i++)
    {
        int digit = 1;
        while (nums[i] > 9)
        {
            nums[i] /= 10;
            digit++;
        }
        if (digit % 2 == 0)
            ans++;
    }
    return ans;
}
