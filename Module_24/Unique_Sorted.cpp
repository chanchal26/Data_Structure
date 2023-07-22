#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;cin>>m;
    for (int i = 0; i < m; i++)
    {
        stack<int> st;
        int n;cin>>n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        for(auto i:mp){
            st.push(i.first);
        }
        while (!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        
        cout<<endl;
    }
    
    
    return 0;
}