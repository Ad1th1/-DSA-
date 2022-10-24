
struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        // code here
        map<string,int>mp;
        for(auto it:A){
            mp[it]++;
        }
        vector<alphanumeric> ans;
        for(auto it:mp){
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};
