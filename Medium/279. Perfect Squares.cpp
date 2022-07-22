int numSquares(int n) {
   int i, j;
    vector<int> dp(n+1, INT_MAX);
    dp[0]=0;
    for(i=1; i<=n; i++){
        for(j=1; j*j<=i; j++)
            dp[i]=min(dp[i], dp[i-j*j]+1);
    }
    return dp[n];
}
