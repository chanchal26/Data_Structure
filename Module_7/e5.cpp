#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;

        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

void insert_at_head(Node* &head,Node* tail,int val){
    Node *newNode=new Node(val);
    newNode->next=tail;
    head=newNode;
}
void insert_at_tail(Node* &tail,Node* head,int val){
    Node *newNode=new Node(val);
    head->next=newNode;
    tail=newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
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
        if (tail==NULL)
        {
            insert_at_head(head,tail,val);
            insert_at_tail(tail,head,val);
            print_linked_list(head);
        }else if (pos==1)
        {
            insert_at_tail(tail,head,val);
            print_linked_list(head);
        }else if (pos==0)
        {
            insert_at_head(head,tail,val);
            print_linked_list(head);
        }
        
        i++;
    }
    
    return 0;
}