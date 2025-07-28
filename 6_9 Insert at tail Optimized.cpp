#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val =val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    // Node* tmp = head;
    Node* new_node =new Node(val);
    if (head==NULL)
    {
       head=new_node;
       return;
    } 
    tail->next=new_node;
    tail=tail->next;
}

void print_linkedlist(Node* head)
{

    Node* temp =head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";  
}

int main() {
    Node* head =new Node(10);
    Node* a =new Node(20);
    Node* tail =new Node(30);

    head->next=a;
    a->next=tail;

    insert_at_tail(head,tail,44);
    insert_at_tail(head,tail,55);
    insert_at_tail(head,tail,66);
    print_linkedlist(head);
    cout<<endl;
    cout<<"tail -> "<<tail->val;
    return 0;
}