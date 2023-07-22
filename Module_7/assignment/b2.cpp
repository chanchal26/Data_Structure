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
void same_to_same(Node *head,Node *head2)
{
    Node *tmp=head;
    Node *tmp2=head2;
    if(size(tmp) != size(tmp2)){
        cout<<"NO"<<endl;
    }else{
        while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            cout<<"NO"<<endl;
            return;
        }

        tmp=tmp->next;
        tmp2=tmp2->next;
    }

    cout<<"YES"<<endl;
    }
    
}

int main()
{
    Node* head=NULL;
    Node* head2=NULL;
    Node* tail=NULL;
    int val1,val2;
    while (true)
    {
        cin>>val1;
        if (val1==-1)
            break;
        insert_tail(head,tail,val1);
    }
    
    while (true)
    {
        cin>>val2;
        if (val2==-1)
            break;
        insert_tail(head2,tail,val2);
    }
    same_to_same(head,head2);
    return 0;
}