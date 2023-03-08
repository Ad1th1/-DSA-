class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, hi=pow(10,9), k=0;
        while(low<=hi){
            k = low+(hi-low)/2;
            int H=0;
            for(int i=0;i<piles.size();i++){
                H += ceil(piles[i]*1.0/k);
            }
            if(H>h)
                low = k+1;
            else
                hi = k-1;
                
        }
        return low;
    }
};
