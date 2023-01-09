class Solution {
  public:
    int solve(int N, vector<int> A) {
        // code here
        int count=N;
        if(A[N-1]!=9)
            return N;
        if(A[N-1]==9){
            for(int i=N-2;i>=0;i--){
                if(A[i]==9){
                    count--;
                }
                else
                    return count-1;
            }
        }
    }
};
