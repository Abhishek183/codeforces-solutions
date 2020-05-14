#include<iostream>
using namespace std;
int main()
{
    int i,j,n,hn;
    cin>>n;
    hn=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==hn) || (i==hn) || (j==1 && i<=hn) || (j>=hn && i==1) || (i==n && j<=hn)|| (j==n && i>=hn)) cout<<"*";
             else cout<<" ";
        } cout<<endl;
    }
}

