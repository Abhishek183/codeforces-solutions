#include<iostream>
using namespace std;
#define ll long long
int main()
{
   ll int n,sum=0,mx=-100000000;
    cin>>n;
    ll int a[n];
    for(ll int i=0; i<n; i++)
    {
        cin>>a[i];
        if(mx<a[i])
        {
            mx=a[i];
        }
    }
    for(ll int i=0; i<n; i++)
    {
        sum+=mx-a[i];
    } cout<<sum;





}
