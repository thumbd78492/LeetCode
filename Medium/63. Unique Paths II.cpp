int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), 0));
    for (int i=0; i<dp.size() && obstacleGrid[i][0] == 0; i++)
        dp[i][0] = 1;
    for (int i=0; i<dp[0].size() && obstacleGrid[0][i] == 0; i++)
        dp[0][i] = 1;

    for (int i=1; i<dp.size(); i++)
        for (int j=1; j<dp[0].size(); j++)
            if (obstacleGrid[i][j] == 1)
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                //dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + 1;
    /*for (int i=0; i<dp.size(); i++)
    {
        for (int j=0; j<dp[0].size(); j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }*/
    return dp.back().back();
}
