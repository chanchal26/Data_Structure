#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        stack<char> st,st2;
        int x;
        string s;
        cin>>x;
        cin>>s;
        for(char c:s){
                if (st.empty())
                {
                    st.push(c);
                }
                else if ((c=='R' && st.top()=='G') || (st.top()=='R' && c=='G')){
                    st.pop();
                    if (!st.empty() && st.top()=='Y')
                    {
                        st.pop();
                    }else{
                        st.push('Y');
                    }
                }else if ((c=='G' && st.top()=='B') || (st.top()=='G' && c=='B')){
                    st.pop();
                    if (!st.empty() && st.top()=='C')
                    {
                        st.pop();
                    }else{
                        st.push('C');
                    }
                }else if ((c=='R' && st.top()=='B') || (st.top()=='R' && c=='B')){
                    st.pop();
                    if (!st.empty() && st.top()=='P')
                    {
                        st.pop();
                    }else{
                        st.push('P');
                    }
                }else if (c==st.top())
                {
                    st.pop();
                }
                
                else{
                    st.push(c);
                }
            
            
            
            
            
        }
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        
        while (!st2.empty())
            {
                cout<<st2.top();
                st2.pop();
            }
            cout<<endl;
    }
    
    return 0;
}