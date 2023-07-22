#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        queue<char> q1,q2;
        int x;cin>>x;
        char c,d;
        for (int i = 0; i < x; i++)
        {
            cin>>c;
            q1.push(c);
        }
        while (!q1.empty())
        {
            d=q1.front();
            if(!q1.empty()) q1.pop();
            if ((d=='R' && q1.front()=='G') || (q1.front()=='R' && d=='G'))
            {
                q2.push('Y');
                if(!q1.empty()) q1.pop();
                
            }else if ((d=='G' && q1.front()=='B') || (q1.front()=='G' && d=='B'))
            {
                q2.push('C');
                if(!q1.empty()) q1.pop();
                
            }else if ((d=='R' && q1.front()=='B') || (q1.front()=='R' && d=='B'))
            {
                q2.push('P');
                if(!q1.empty()) q1.pop();
                
            }else if (d==q1.front())
            {
                if(!q1.empty()) q1.pop();
            }else {
                q2.push(d);
            }
            
        }

        stack<char> s1,s2;
        

        while (!q2.empty())
        {
            s1.push(q2.front());
            if(!q2.empty()) q2.pop();
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