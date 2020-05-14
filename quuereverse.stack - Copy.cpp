#include<iostream>
#include<stack>
#include<queue>
using namespace std;
/*void repeat(stack<int>&s,queue<int>&q)
{
    if(s.empty()) return ;
    repeat(s,q);
    s.pop();
    int st=s.top();
    q.push(st);
}*/


void revers( queue<int>&q,stack<int>&s)
{
    if(q.empty()) return ;
     revers(q,s);
     //stack<int>s;
     q.pop();
     int st=q.front();
//     int k=s.push(st);
      q.push(st);

}


int main()
{
    queue<int>q;
    stack<int>s;
    int n;cin>>n;
    for(int i=0;i<=n;i++)
    {   int data;
        cin>>data;
        q.push(data);
    }
    revers(q,s);
     for(int i=0;i<=n;i++)
    {   cout<<q.front();
        q.pop();
    }


}







