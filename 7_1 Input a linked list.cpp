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
 
    Node* new_node =new Node(val);
    if (head==NULL)
    {
       head=new_node;
       return;
    } 
    tail->next=new_node;
    tail=tail->next;
}

void print(Node* head)
{
    Node * tmp =head;
    while (tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main() {

//    Node* head = new Node(10);
//    Node* a = new Node(20);
//    Node* tail= new Node(30);
//    head->next=a;
//    a->next=tail;
Node* head = NULL;
Node* tail = NULL;
int val;
while(1)
{
    cin>>val;
    if(val==-1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
}


   
    print(head);

    return 0;
}



