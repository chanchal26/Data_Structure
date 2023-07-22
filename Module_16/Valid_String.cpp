#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        stack<char> a,b;
        string s;
        cin>>s;
        for(char c:s){
            if (c=='A')
            {
                a.push(c);
            }else{
                b.push(c);
            }
        }

        if (a.size()==b.size())
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}