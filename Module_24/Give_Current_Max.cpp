#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
    Student(string name,int roll,int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp
{
    public:
        bool operator()(Student a,Student b)
        {
            if (a.marks < b.marks){
                return true;
            }else if (a.marks > b.marks)
            {
                return false;
            }else{
                if (a.roll > b.roll)
                {
                    return true;
                }else{
                    return false;
                }
                
            }
            
        }
};
int main()
{
    int n;cin>>n;
    priority_queue<Student,vector<Student>,cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int x;cin>>x;
    while (x--)
    {
        int a;cin>>a;
        if (a==0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }else if (a==1)
        {
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }else{
            if(!pq.empty()) pq.pop();
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }
        
        
    }
    
    return 0;
}