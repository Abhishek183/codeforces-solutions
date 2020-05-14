#include<iostream>
using namespace std;
void inst(int a[],int n)
{ int i,j,k=0;
   for(i=1;i<n;i++)
   { int temp=a[i];
       for(j=i-1;j>=0 && a[j]>temp ;j--)
       {
         a[j+1]=a[j];

       }a[j+1]=temp;

   }
}
int main()
{
    int i,n;cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }inst(a,n);
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


