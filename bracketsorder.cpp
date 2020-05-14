#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void revers( queue<int>&q)
{
    if(q.empty()) return ;
     int st=q.front();
     q.pop();
     revers(q);
     q.push(st);
     return;



}

int main()
{
    queue<int>q;
    //queue<int> iterator it;
    int n;cin>>n;
    for(int i=0;i<=n;i++)
    {   int data;
        cin>>data;
        q.push(data);
    }
    revers(q);
     for(int i=0;i<=n;i++)
    {   cout<<q.front();
        //cout<<data;
        q.pop();
    }


}






