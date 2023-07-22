#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        int flag=1;
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(arr[j]>arr[k]){
                    flag=0;
                    break;
                }
            }
            
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}