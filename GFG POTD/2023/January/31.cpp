// https://practice.geeksforgeeks.org/problems/fda70097eb2895ecfff269849b6a8aace441947c/1


class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        string temp = A;
        int cnt=1;
        while(temp.length()<B.length()){
            temp+=A;
            cnt++;
        }
        if(temp.find(B)==-1){
            temp+=A;
            if(temp.find(B)!=-1)
                return cnt+1;
            return -1;
        }
        else return cnt;
    }
};
