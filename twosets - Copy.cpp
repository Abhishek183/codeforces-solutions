#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int a[n],b[m], ax=-1,in=100000;
    for(int i=0;i<n;i++) {cin>>a[i];  ax=max(a[i],ax);}
    for(int i=0;i<m;i++) {cin>>b[i]; in= min(b[i],in);}
    int mila=0,dubara=0,c=0,i=0;
    for( i=ax;i<=in;i++)
    {   mila=0;dubara=0;
         for(int j=0;j<n;j++)
       {
           if(i%a[j]==0)  mila++;
            else break;
       }

       if(mila==n)
       {
           for(int j=0;j<m;j++)
           {
               if(b[j]%i==0)  dubara++;
           }
           if(dubara==m) c++;
       }

    }cout<<c;
}
