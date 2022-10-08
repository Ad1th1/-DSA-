long long int dfs(int S[],int n,int sum, vector<vector<long long>>&dp){
    if(n==0)
        return 1;
    if(n<0 || m<=0)
        return 0;
    if(dp[m][n])
        return dp[m][n];
    
    return dp[m][n] = dfs(S,n-1,sum,dp) + dfs(S,n,sum-S[m-1],dp);
}



long long int count(int S[],int n,int sum){
    vector<vector<long long>>dp(m+1,vector<long long>(n+1,0));
    return dfs(S,n,sum,dp);
}
