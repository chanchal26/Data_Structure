#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    int mx=INT_MIN;
    int mf=INT_MIN;
    for(auto i:mp){
        if (i.second>mx)
        {
            mx=i.second;
        }else if (i.second == mx)
        {
            if (i.first>mf)
            {
                mf=i.first;
            }
            
        }
        
    }

    cout<<mf<<" "<<mx<<endl;

    return 0;
}