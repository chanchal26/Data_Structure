#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void delete_at_position(Node* head,int pos)
{
    Node* tmp=head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}
void delete_tail(Node* &head,Node* &tail)
{
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_head(Node* &head,Node* &tail)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    if(head==NULL){
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
int size(Node* head)
{
    Node *tmp=head;
    int count=0;
    while (tmp != NULL)
    {
        tmp=tmp->next;
        count++;
    }
    return count;
}
void print_normal(Node* head)
{
    Node* tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* tmp=tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    // Node* head=NULL;
    // Node* tail=NULL;

    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=new Node(50);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=tail;
    tail->prev=c;

    int pos;
    cin>>pos;

    if(pos>=size(head)){
        cout<<"Invalid Position"<<endl;
    }
    else if (pos==0)
    {
        delete_head(head,tail);
    }else if (pos==size(head)-1)
    {
        delete_tail(head,tail);
    }else{
        delete_at_position(head,pos);
    }
    
    print_normal(head);
    print_reverse(tail);
    
    return 0;
}