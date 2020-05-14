#include<iostream>
using namespace std;
int main()
{
int i,j,p=1,k=1;
for(i=1;i<=5;i++)
{ if(p<=3)k++;
  else k--;
    for(j=1;j<=5;j++)
    {
      if(j>=5-k && j<=k+1)
        {cout<<"*";
        }
      else
        cout<<" ";
    } cout<<endl;p++;
}
}

