#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["akib"]=10;
    mp["rakib"]=20;
    mp["rajib"]=30;
    mp.insert({"abir",99});
    mp.insert(make_pair("kodom",60));

    cout<<mp["rakib"]<<endl;
    cout<<mp.count("kodom")<<endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}