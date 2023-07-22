#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    list<int> a,b;
    int n,m,val;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        s.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        cin>>val;
        q.push(val);
    }
    
    for (int i = 0; i < n; i++)
    {
        a.push_back(s.top());
        s.pop();
    }
    for (int i = 0; i < m; i++)
    {
        b.push_back(q.front());
        q.pop();
    }
    
    if (a==b)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}