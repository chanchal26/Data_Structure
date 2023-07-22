#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        stack<char> s1,s2;
        int x;cin>>x;
        char c,d;
        for (int i = 0; i < x; i++)
        {
            cin>>c;
            s1.push(c);
        }
        while (!s1.empty())
        {
            d=s1.top();
            s1.pop();
            if ((d=='R' && s1.top()=='G') || (s1.top()=='R' && d=='G'))
            {
                s2.push('Y');
                s1.pop();
                
            }else if ((d=='G' && s1.top()=='B') || (s1.top()=='G' && d=='B'))
            {
                s2.push('C');
                s1.pop();
                
            }else if ((d=='R' && s1.top()=='B') || (s1.top()=='R' && d=='B'))
            {
                s2.push('P');
                s1.pop();
                
            }else if (d==s1.top())
            {
                s1.pop();
            }else {
                s2.push(d);
            }
            
        }

        while (!s2.empty())
        {
            s1.push(s2.top());
            if(!s2.empty()) s2.pop();
        }

        while (!s1.empty())
        {
            char a=s1.top();
            s1.pop();
            if (s1.empty())
            {
                s2.push(a);
                
            }else if (a == s1.top())
            {
                if(!s1.empty()) s1.pop();
            }else{
                s2.push(a);
                s2.push(s1.top());
                if(!s1.empty()) s1.pop();
            }
        }


        while (!s2.empty())
        {
            char a=s2.top();
            s2.pop();
            if (s2.empty())
            {
                s1.push(a);
                
            }else if (a == s2.top())
            {
                if(!s2.empty()) s2.pop();
            }else{
                s1.push(a);
                s1.push(s2.top());
                if(!s2.empty()) s2.pop();
            }
        }

        while (!s1.empty())
        {
            char a=s1.top();
            s1.pop();
            if (s1.empty())
            {
                s2.push(a);
                
            }else if (a == s1.top())
            {
                if(!s1.empty()) s1.pop();
            }else{
                s2.push(a);
                s2.push(s1.top());
                if(!s1.empty()) s1.pop();
            }
        } 
        
        while (!s2.empty())
        {
            cout<<s2.top();
            if(!s2.empty()) s2.pop();
        }
        
        cout<<endl;
    }
    
    return 0;
}

