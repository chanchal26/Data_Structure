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
int main()
{
    Node a(15);
    Node b(150);
    Node c(1500);

    a.next=&b;
    b.next=&c;

    cout<<a.val<<" "<<a.next->val<<endl;
    cout<<b.val<<" "<<b.next->val<<endl;
    cout<<c.val<<" "<<endl;
    
    return 0;
}