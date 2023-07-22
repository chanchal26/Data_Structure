#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int n;cin>>n;
    int com;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin>>com;
        if (com==1)
        {
            if (q.empty())
            {
                cout<<"Invalid"<<endl;
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }else{
            cin>>name;
            q.push(name);
        }
        
    }
    
    return 0;
}