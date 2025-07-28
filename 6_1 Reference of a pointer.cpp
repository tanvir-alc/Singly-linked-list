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
void insert_at_head(Node* &head,int val)
{
    Node* new_node =new Node(val);
    new_node->next=head;
    head = new_node;
}
void print_linked_list(Node* head)
{
    Node* temp =head;
    while (temp!=NULL)
    {
        cout<<temp->val <<endl;
        temp = temp-> next;
    }
}
int main() {
    Node* head =new Node(10);
    Node* a =new Node(20);
    Node* b =new Node(30);

    head->next=a;
    a->next =b;

    insert_at_head(head,100);
    insert_at_head(head,200);
    insert_at_head(head,400);
    print_linked_list(head);
    return 0;
}