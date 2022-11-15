// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int i=0,r=0,m=0,j=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]+i>m){
                m=i+arr[i];
            }
            if(i==r){
                j++;
                r = m;
            }
            if(arr[i]==0 && m==i)
                return -1;
        }
        return j;
    }
};
