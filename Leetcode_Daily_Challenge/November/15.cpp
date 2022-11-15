// https://leetcode.com/problems/count-complete-tree-nodes/

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        
        int l=0,r=0;
        TreeNode* ll=root, *rr=root;
        while(ll){
            l++;
            ll=ll->left;       
        }
        
        while(rr){
            r++;
            rr=rr->right;       
        }
        
        if(l==r)
            return pow(2,l)-1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
  
  // Alt:
class Solution {
public:
    int countNodes(TreeNode* root) {
        return !root?0:1 + countNodes(root->left) + countNodes(root->right);
    }
};
