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

void insert_at_head(Node*& head,Node* &tail,int val){
    Node* newNode= new Node(val);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_at_any_position(Node* head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
void insert_at_tail(Node* &tail,Node* &head,int val)
{
    Node* newNode=new Node(val);
    if (tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
int size(Node* head)
{
    Node *tmp=head;
    int count=0;
    while (tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void print_normal(Node* head)
{
    Node* tmp=head;
    cout<<"L -> ";
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
    cout<<"R -> ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;cin>>q;
    int i=0;
    while (i<q)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos>size(head)){
        cout<<"Invalid"<<endl;
        }
        else if (pos==0)
        {
            insert_at_head(head,tail,val);
            print_normal(head);
            print_reverse(tail);
        }
        else if (pos==size(head))
        {
            insert_at_tail(tail,head,val);
            print_normal(head);
            print_reverse(tail);
        }
        else{
            insert_at_any_position(head,pos,val);
            print_normal(head);
            print_reverse(tail);
        }
        i++;
    }
    
    return 0;
}