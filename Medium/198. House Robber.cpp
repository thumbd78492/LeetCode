int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0)
        return 0;

    int ans = nums[0];
    vector<int> dp(n+3, 0);

    for (int i=nums.size()-1; i>=0; i--)
    {
        dp[i] = max(nums[i]+dp[i+2], nums[i]+dp[i+3]);
        if (ans < dp[i])
            ans = dp[i];
    }
    for (int i=0; i<dp.size(); i++)
        cout << dp[i] << " ";
    return ans;
}
