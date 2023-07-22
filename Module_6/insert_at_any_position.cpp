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
void insert_at_tail(Node *& head,int v)
{
    Node *newNode=new Node(v);
    if (head==NULL)
    {
        head=newNode;
        cout<<endl<<"Inserted at head."<<endl<<endl;
        return;
    }
    
    Node *tmp=head;
    while (tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    cout<<endl<<"Inserted at tail."<<endl<<endl;
}
void print_linked_list(Node *head)
{
    cout<<"Your linked list:"<<endl;
    Node*tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
void insert_at_any_position(Node* head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node *tmp=head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Inserted at position "<<pos<<endl<<endl;
}
void insert_at_head(Node* &head,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted at Head"<<endl;
}
int main()
{
    Node *head=NULL;
    while (true)
    {
        cout<<endl;
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Insert at any position"<<endl;
        cout<<"Option 3: Print linked list"<<endl;
        cout<<"Option 4: Terminate"<<endl;
        int op;
        cin>>op;
        if (op==1)
        {
            cout<<"Please Enter a value:";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if (op==2)
        {
            int pos,val;
            cout<<"Enter a position:";
            cin>>pos;
            cout<<"Enter a value:";
            cin>>val;
            if(pos==0){
                insert_at_head(head,val);
            }else{
                insert_at_any_position(head,pos,val);
            }
        }
        
        else if (op==3)
        {
            print_linked_list(head);
        }else if (op==4)
        {
            break;
        }
        
        
        
    }
    
    return 0;
}