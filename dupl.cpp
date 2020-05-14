#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int a[n],i=0,c=1;
    cin>>a[n];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];  }
        sort(a,a+n);

    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            cout<<a[i];
    }
}
