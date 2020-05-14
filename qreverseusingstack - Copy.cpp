#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void srev(queue<int>&q,stack<int>&s)
 {
    if((!s.empty()))
       {
        int st=s.top();
        q.push(st);
        s.pop();
        srev(q,s);
       }
   }
void qrev(queue<int>&q,stack<int>&s)
{ if(q.empty()) return;
  if(!q.empty())
   {
    int data=q.front();
    s.push(data);
    q.pop();
    qrev(q,s);
   }
   srev(q,s);}


int main()
{queue<int>q;
stack<int>s;
 int n,data;cin>>n;
 for(int i=0;i<n;i++)
 {   cin>>data;
     q.push(data);
 }
  qrev(q,s);
  while(!q.empty())
  {
      cout<<q.front();
      q.pop();
  }


}

