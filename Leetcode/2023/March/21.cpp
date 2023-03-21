class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0, x=0;
        for(auto n : nums){
            if(n==0)
                ans += ++x;
            else
                x=0;
        }
        return ans;
    }
};
