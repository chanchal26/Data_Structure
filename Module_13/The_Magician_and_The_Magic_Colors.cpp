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
            q1.pop();
            if (d=='R' && q1.front()=='G' || q1.front()=='R' && d=='G')
            {
                if (q2.front()=='Y')
                {
                    q2.pop();
                }else{
                    q2.push('Y');
                    q1.pop();
                }
                
            }else if ((d=='G' && q1.front()=='B') || (q1.front()=='G' && d=='B'))
            {
                if (q2.front()=='C')
                {
                    q2.pop();
                }else{
                    q2.push('C');
                    q1.pop();
                }
                
            }else if ((d=='R' && q1.front()=='B') || (q1.front()=='R' && d=='B'))
            {
                if (q2.front()=='P')
                {
                    q2.pop();
                }else{
                    q2.push('P');
                    q1.pop();
                }
                
            }else if(d==q1.front()){
                if (q2.front()==d)
                {
                    q2.pop();
                }else{
                    q2.push(d);
                }
            }
            
        }
        if(q2.empty()) cout<<" ";
        while (!q2.empty())
        {
            cout<<q2.front();
            q2.pop();
        }
        cout<<endl;
    }
    
    return 0;
}