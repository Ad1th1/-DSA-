vector<vector<long long>> dp(m+1,vector<long long>(n+1,0));
    for(int i=0;i<=m;i++)
        dp[i][0] = 1;

    for(int i=1;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(j>=S[i-1])
                dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[m][n];
