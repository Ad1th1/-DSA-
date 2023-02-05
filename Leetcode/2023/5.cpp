
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        int len1=0, len2=0;
        Node* node1=head1, *node2=head2;
        
        while(node1!=NULL){
            len1++;
            node1=node1->next;
        }
        
        while(node2!=NULL){
            len2++;
            node2=node2->next;
        }
        
        node1 = head1;
        node2 = head2;
        
        int diff=0;
        if(len1>len2){
            diff=len1-len2;
            for(int i=0;i<diff;i++){
                node1=node1->next;
            }
        }
        else{
            diff=len2-len1;
            for(int i=0;i<diff;i++){
                node2=node2->next;
            }
        }
        
        while(node1!=NULL && node2!=NULL){
            if(node1==node2){
                return node1->data;
            }
            node1=node1->next;
            node2=node2->next;
        }
        return -1;
    }
};
