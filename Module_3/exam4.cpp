#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;cin>>m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int x;cin>>x;
    
    for (int i = m-1; i >= 0; i--)
    {
        a.insert(a.begin()+x,b[i]);
    }
    
    for(int val:a){
        cout<<val<<" ";
    }
    return 0;
}