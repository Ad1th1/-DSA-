

class Solution{
public:

    void solve(Node* root,int j,map<int,int>&mp){
        mp[j] += root->data;
        if(root->left){
            solve(root->left,j-1,mp);
        }
        if(root->right)
            solve(root->right,j+1,mp);
    }

    long long int verticallyDownBST(Node *root,int target){
        // Code here
        while(root){
            if(root->data==target)
                break;
            else if(root->data > target){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        if(root==NULL)
            return -1;
        
        map<int,int>mp;
        int temp = root->data;
        solve(root,0,mp);
        return mp[0] - temp;
    }
};
