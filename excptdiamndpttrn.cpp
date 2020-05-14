#include<iostream>
using namespace std;
int main()
{
int i,j,p=1,k=0;
for(i=1;i<=5;i++)
{ if(p<=3)k++;
  else k--;
    for(j=1;j<=7;j++)
    {
      if(j<=4-k || j>=k+4)
        {cout<<"*";
        }
      else
        cout<<" ";
    } cout<<endl;p++;
}
}


