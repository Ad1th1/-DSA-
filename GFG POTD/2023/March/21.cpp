

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int ans = INT_MAX;
        for(int i=0;i<N;i++){
            int curr = abs(cur-pos[i])*time[i];
            ans = min(ans,curr);
        }
        return ans;
    }
};
