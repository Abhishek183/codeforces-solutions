#include<iostream>
using namespace std;
int main()
{
int i,j,n;
 cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(2*n)-1;j++)
    {
      if(j>=n+1-i && j<=n-148+i)
        cout<<"*";
      else
        cout<<" ";
    } cout<<endl;
}
}
