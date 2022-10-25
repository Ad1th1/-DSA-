// initial sliding window approach created time-complexity issues
// https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        multiset<int>s;
        int i=0,j = 0;
        while(i<k){
            s.insert(arr[i]);
            i++;
        }
        
        ans.push_back(*s.rbegin());
        
        while(i<n){
            s.erase(s.find(arr[j]));
            s.insert(arr[i]);
            ans.push_back(*s.rbegin());
            i++;
            j++;
        }
        return ans;
    }
};
