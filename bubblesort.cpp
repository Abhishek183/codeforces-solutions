#include<iostream>
using namespace std;
void bub(int a[],int n)
{ int i,j,flag;
   for(i=0;i<n-1;i++)
   { flag=0;
       for(j=0;j<n-i-1;j++)
       {
           if(a[j+1]<=a[j]) swap(a[j],a[j+1]);flag=1;
       } if(flag==0) return;
   }

}
int main()
{
    int i,n;cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }bub(a,n);
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
