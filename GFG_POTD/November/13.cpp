// https://practice.geeksforgeeks.org/problems/fill-up-buckets3500/1

# define mod 1000000007
class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
        // code here
        long long int ans = 1;
        sort(capacity.begin(),capacity.end());
        
        for(int i=0;i<n;i++){
            ans = ((ans%mod)*((capacity[i]-i))%mod)%mod;
        }
        return ans;
        
    }
};
