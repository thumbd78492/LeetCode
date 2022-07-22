int coinChange(vector<int>& coins, int amount) {
    vector<long> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= amount; ++i) {
        for (int j = 0; j < coins.size(); ++j) {
            if (i - coins[j] >= 0 && dp[i - coins[j]] + 1 < dp[i]) {
                dp[i] = dp[i - coins[j]] + 1;
            }
        }
    }
    /*
    for (int i=0; i<amount+1; i++)
        cout << dp[i] << '\t';*/

    return dp[amount] == INT_MAX ? -1 : int(dp[amount]);
}
