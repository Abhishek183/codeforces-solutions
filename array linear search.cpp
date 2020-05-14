#include<iostream>
using namespace std;

int ser(int k)
{int i,a[k],m,l=0;
    for(i=0;i<k;i++)
    {
     cin>>a[i];}
     cin>>m;
     for(i=0;i<k;i++)
     {
       if(a[i]==m)
         {return i;l=1;
           break;}
    }if(l==0)
       return -1;
    }

int main()
{int n,res;
    cin>>n;
    res=ser(n);
   cout<<res;}


