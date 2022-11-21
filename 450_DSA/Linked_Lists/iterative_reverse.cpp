

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int data){
        this->data = data;
        next=NULL;
    }
};

struct LinkedList{
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void push(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void print(){
        struct Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void reverse(){
        Node* curr = head, *prev=NULL, *next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        head=prev;
    }

};

int main(){
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout<<"Given linkedlist:\n";
    ll.print();

    ll.reverse();

    cout<<"Reversed linkedlist:\n";
    ll.print();
    return 0;
}
