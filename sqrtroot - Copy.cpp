#include<iostream>
using namespace std;
int main()
{
    int n,i,p; float ans=0,icr=1;
    cin>>n>>p;
    for(i=0;i<=p;i++)
    {
      icr=icr/10;
    for(ans=ans;(ans*ans)<=n;ans=ans+icr)
    { ans=ans-icr;

    } cout<<ans;
    }
}

