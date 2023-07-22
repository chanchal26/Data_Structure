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

void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
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
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
            break;
        insert_tail(head,tail,val);
        
        
    }
    for (Node* i = head; i->next != NULL; i=i->next)
    {
        for (Node* j = i->next; j != NULL; j=j->next)
        {
            if (i->val<j->val)
            {
                swap(i->val,j->val);
            }
            
        }
        
    }
    Node* tmp=head;
    
    for (int i = 0; i < size(tmp); i++)
    {
        if(size(head)%2==0){
            if(i==(size(head)/2)-1){
                cout<<tmp->val<<" "<<tmp->next->val<<endl;
                break;
            }
        }else{
            if(i==(size(head)/2)){
                cout<<tmp->val<<endl;
                break;
            }
        }
        tmp=tmp->next;
    }
    
    return 0;
}