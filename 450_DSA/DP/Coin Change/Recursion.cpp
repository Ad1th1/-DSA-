long long int dfs(int S[],int m,int sum){
    if(sum==0)
        return 1;
    if(sum<0 || m<=0)
        return 0;

    return dfs(S,m-1,sum) + dfs(S,m,sum-S[m-1]);
}


long long int count(int S[],int m,int sum){
    return dfs(S,m,sum);
}
Footer
