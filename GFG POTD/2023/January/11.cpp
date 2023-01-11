// https://practice.geeksforgeeks.org/problems/6e63df6d2ebdf6408a9b364128bb1123b5b13450/1

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        long long int diff=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<N-1;i++){
            if(arr[i]==arr[i+1]){
                arr[i+1]++;
                diff++;
            }
            if(arr[i]>arr[i+1]){
                diff = diff + (arr[i]-arr[i+1])+1;
                arr[i+1] = arr[i]+1;
            }
        }
       return diff;
    }
};
