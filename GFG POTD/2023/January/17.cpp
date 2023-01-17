// https://practice.geeksforgeeks.org/problems/6eb51dc638ee1b936f38d1ab4b2f7062d4425463/1

class Solution
{
public:
    
    int solve(Node* root, int &ans, int &maxi){
        if(!root)
            return 0;
        int l = solve(root->left,ans,maxi);
        int r = solve(root->right,ans,maxi);
        
        if(__gcd(l,r)>maxi && l!=0 && r!=0){
            maxi = __gcd(l,r);
            ans = root->data;
        }
        return root->data;
        
    }

    int maxGCD( Node* root)
    {
        //code here
        if(!root)
            return 0;
        int ans=0;
        int maxi=INT_MIN;
        solve(root,ans,maxi);
        return ans;
    }
};
