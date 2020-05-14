#include<iostream>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll int s,p,ans=0;
    cin>>s>>p;
    int a[p];
    for(int i=0; i<p; i++)
        cin>>a[i];
    sort(a,a+p);
    if(s!=p)
    {    int mine=1000000;
        for(int i=0; i<=p-s; i++)
        {
            ans=a[i+s-1]-a[i];
            if(ans<mine) mine=ans;
        }
        cout<<mine<<" ";
    }
    else
    {
        cout<<a[s-1]-a[0];
    }

}
