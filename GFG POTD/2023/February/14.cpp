class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        int p=0,b=0,y=0;
        
        for(int i=0;i<N;i++){
            int cp = min(b,y) + colors[i][0];
            int cb = min(p,y) + colors[i][1];
            int cy = min(b,p) + colors[i][2];
            
            p=cp;
            b=cb;
            y=cy;
        }
        return min(p,min(b,y));
    }
};
