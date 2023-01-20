// https://leetcode.com/problems/non-decreasing-subsequences/

class Solution {
public:
    map<vector<int>,int>mp;    
    void solve(vector<int>&nums,vector<vector<int>>& res, int x, vector<int>& temp){
        if(temp.size()>=2){
            mp[temp]++;
            if(mp[temp]>1)
                return;
            res.push_back(temp);
        }
        
        if(x>nums.size())
            return;
    
        for(int i=x;i<nums.size();i++){
            if(temp.size()>=1){
                if(nums[i]<temp[temp.size()-1])
                    continue;
            }
            temp.push_back(nums[i]);
            solve(nums,res,i+1,temp);
            temp.pop_back();
        }
        return;
        
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int> temp;
        solve(nums,res,0,temp);
        return res;
    }
};
