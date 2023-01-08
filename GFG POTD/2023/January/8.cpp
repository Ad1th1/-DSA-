

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        long long int ans=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            ans+=mp[arr[i]%k];
            mp[arr[i]%k]++;
        }
        return ans;
    }
};
