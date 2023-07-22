#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4};
    v.resize(2);
    v.resize(4);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<v[i];
    // }
    for (int val:v )
    {
        cout<<val;
    }
    
    return 0;
}