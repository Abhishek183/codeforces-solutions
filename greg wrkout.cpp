/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[3]={0};
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
       if(c==0) a[0]+= x;
       else if(c==1) a[1]+=x;
       else a[2]+=x;
       c++;
       if(c==3) c=0;
    }

    //cout<<a[0]<<a[1]<<a[2];
   if(a[0]>a[1])
      {
        if(a[0]>a[2]) cout<<"chest";
        else cout<<"back";
      }
   else
   {
        if(a[1]>a[2]) cout<<"biceps";
        else cout<<"back";
   }
}

