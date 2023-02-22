#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

int maxDepth(node* node){
    if(node==NULL)
        return 0;
    else{
        int ld = maxDepth(node->left);
        int rd = maxDepth(node->right);

        return max(ld,rd)+1;
    }
}

node* newNode(int data){
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

int main(){
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout<<"Height if tree is "<<maxDepth(root);
    return 0;

}
