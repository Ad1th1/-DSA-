// https://practice.geeksforgeeks.org/problems/base-equivalence1022/1

class Solution {
  public:
    string baseEquiv(int n, int m){
        // code here
        for(int i=2;i<=32;i++){
            int count = 0;
            int cur = n;
            while(cur!=0){
                count++;
                cur /= i;
                if(count>m)
                    break;
            }
            if(count == m)
                return "Yes";
        }
        return "No";
    }
};
