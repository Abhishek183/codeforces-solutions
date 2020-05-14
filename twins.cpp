#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int i=0,n,sum=0,c=0;
  cin>>n;
  int a[n],z=0;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
      sum=sum+a[i];
  }
   sort(a,a+n);

   if(a[n-1]==sum/2)
   {
       c=2;
       cout<<c;
   }
   else if(a[n-1]>sum/2)
   {
       c=1;
       cout<<c;

   }
   else
    { z=0;i=0;
     while(z<=sum/2)
     {
       z=a[n-1-i]+z;
       i++;
       c++;
     }
     cout<<c;

    }
}
