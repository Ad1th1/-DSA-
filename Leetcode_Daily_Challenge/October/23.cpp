// https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int b;
        sort(nums.begin(),nums.end());
        map<int,int> mp;
        int n = nums.size();
        int total = n*(n+1)/2;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum +=nums[i]; 
            if(mp.find(nums[i])!=mp.end())   
                mp[nums[i]]++;
            else
                mp[nums[i]]=1;
        
        }
        
        for(auto it:mp){
            if(it.second==2){
                b = it.first;
                ans.push_back(it.first);
                
            }
        }
        int a = total-sum;
        ans.push_back(a+b);
        
        return ans;
        
    }
};
