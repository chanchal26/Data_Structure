#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int marks;
    Student(int marks){
        this->marks=marks;
    }
};
class cmp
{
    public:
        bool operator()(Student a,Student b)
        {
            if (a.marks > b.marks){
                return true;
            }else if (a.marks < b.marks)
            {
                return false;
            }
            
        }
};
int main()
{
    int n;cin>>n;
    priority_queue<Student,vector<Student>,cmp> pq;
    for (int i = 0; i < n; i++)
    {
        int marks;
        cin>>marks;
        Student obj(marks);
        pq.push(obj);
    }
    int x;cin>>x;
    while (x--)
    {
        int a;cin>>a;
        if (a==0)
        {
            int b;cin>>b;
            Student obj(b);
            pq.push(obj);
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().marks<<endl;
        }else if (a==1)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().marks<<endl;
        }else{
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().marks<<endl;
        }
        
        
    }
    
    return 0;
}