#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
 cin>>n;
 k=(n+1)/2;
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
      if(j>=n+1-k || j<=k)
       {
        cout<<"*";}
      else
        cout<<" ";
    } cout<<endl;
    if(i<(n+1)/2)
       k--;
    else
       {k++;}


}
}
