#include<iostream>
using namespace std;
int main()
{    int m,n;cin>>m>>n;
    int lrow=m-1,lcol=n-1,l=0,k=0,i;
    int a[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

      k=0;
    while(l<=lcol && k<=lrow)
    {
        for(i=lcol;i>=l;i--)
        {
            cout<<a[k][i]<<" ";
        }k++;


        for(i=k;i<=lrow;i++)
        {
            cout<<a[i][l]<<","<<" ";;
        }l++;

        if(l<=lcol)
        {
          for(i=l;i<=lcol;i++)
           {cout<<a[lrow][i]<<" ";}
        lrow--;
        }
        if(k<=lrow)
        {
          for(i=lrow;i>=k;i--)
           {cout<<a[i][lcol]<<" ";}
         lcol--;
        }

    }

}

