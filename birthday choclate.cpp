#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int l;cin>>l;
   int a[l];
   for(int i=0;i<l;i++)
   {
   	cin>>a[i];
   }
   int d,m;cin>>d>>m;
   int sum=0,c=0;
   for(int i=0;i<=l-m;i++)
   {   sum=0;
   	  for(int j=i;j<i+m;j++) sum+=a[j];
   	  if(sum==d) c++;
   }
   cout<<c;
}
