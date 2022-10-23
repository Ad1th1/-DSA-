
// https://practice.geeksforgeeks.org/problems/stepping-numberswrong-output1813/1

// Problem: A number is called a stepping number if all adjacent digits have an absolute difference of 1, e.g. '321' is a Stepping Number while 421 is not. Given 
//          two integers n and m, find the count of all the stepping numbers in the range [n, m].

#include<bits/stdc++.h>
using namespace std;
#include<string.h>
class Solution{
public:
    
    int solve(int m){
        queue<int> q;
        int ans = 1;
        
        for(int i=1;i<=9;i++){
            q.push(i);
        }
        
        if(m<0)
            return 0;
        if(m<10)
            return m+1;
        
        while(q.size()>0){
            int a = q.front();
            q.pop();
 
            ans++;
            
            int ld = a%10;
            int num1 = a*10 + ld+1;
            int num2 = a*10 + ld-1;
            
            if(a%10 ==0){
                if(num1<=m)
                    q.push(num1);
            }
            
            else if(a%10 == 9){
                if(num2<=m)
                    q.push(num2);
            }
            else{
                if(num1<=m)
                    q.push(num1);
                if(num2<=m)
                    q.push(num2);
            }
            
        }
        return ans;
        
    }
    
    int steppingNumbers(int n, int m)
    {
        return solve(m) - solve(n-1);
    }
};


int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}

