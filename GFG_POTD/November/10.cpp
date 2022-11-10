// https://practice.geeksforgeeks.org/problems/jumping-numbers3805/1

class Solution {
  public:
    long long jumpingNums(long long X) {
        // code here
       if(X<=9)
        return X;
        
    int ans = INT_MIN;
        
    queue<int>q;
    for(int i=1;i<=9;i++)
        q.push(i);
    
    while(!q.empty()){
        
        int digit=q.front();
        q.pop();
        
        ans = max(digit,ans);
        
        int rem = digit%10;
        int n1 = digit*10 + rem - 1;
        int n2 = digit*10 + rem + 1;
        
        if(rem==0){
            if(n2<=X)
                q.push(n2);
        }
        
        else if(rem==9){
            if(n1<=X)
                q.push(n1);
        }
        
        else{
            if(n1<=X)
                q.push(n1);
            if(n2<=X)
                q.push(n2);
        }
    }
    return ans;
    }
};
