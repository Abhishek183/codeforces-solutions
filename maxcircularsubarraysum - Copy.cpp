#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

 ll int kadane(ll int a[],int n)
{
    ll int currmax=a[0];
    ll int maxsf=a[0];
    for(ll int i=1;i<n;i++)
    {
        currmax=max(currmax+a[i],a[i]);
        maxsf=max(maxsf,currmax);
    }

    return maxsf;
}

int main()
{
   ll int testcase;cin>>testcase;
    for(ll int i=0;i<testcase;i++){
    ll int sizeofarray;cin>>sizeofarray;
   ll  int a[sizeofarray];
     for(ll int j=0;j<sizeofarray;j++){ cin>>a[j];}
     ll int maxofkadane=kadane(a,sizeofarray);
    ll int sum=0;
    for(ll int j=0;j<sizeofarray;j++)
    {
        sum+=a[j];
        a[j]=-a[j];
    }
   ll int actualsum=sum+kadane(a,sizeofarray);

     cout<<max(actualsum,maxofkadane)<<" ";
}
}
