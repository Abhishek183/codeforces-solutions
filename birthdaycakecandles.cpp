#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int n;cin>>n;int a[n],i,c=0;
    for( i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int largest=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==largest)  c++;
    } cout<<c;
}
