// https://practice.geeksforgeeks.org/problems/86e609332c9ef4f6b8aa79db11a6c0808c4a1bca/1

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        int sum=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<N;i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            int temp=0;
            temp+=pq.top();
            pq.pop();
            temp+=pq.top();
            pq.pop();
            sum+=temp;
            pq.push(temp);
            
        }
        return sum;
    }
};
