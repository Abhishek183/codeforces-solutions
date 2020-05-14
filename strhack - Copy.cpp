#include<iostream>
using namespace std;
int main()
{
int i,j,n,p;
 cin>>n;
for(i=1;i<=n;i++)
{  p=1;
    for(j=1;j<=n;j++)
    {
      if(j<=i )
        {cout<<p;
           p++;  }
      else
        cout<<"*";
    } cout<<endl;
}
}
