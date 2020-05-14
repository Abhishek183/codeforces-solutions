#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
   ll int t;
    cin>>t;
    for( ll int i=0; i<t; i++)
    {
       ll int n,k1,k2,mx=100000000,cnt=0;
        cin>>n>>k1>>k2;
       ll int a[k1];
       ll int b[k2];

        for(ll int j=0; j<k1; j++)
        {
            cin>>a[j];

        }
        for(int j=0; j<k2; j++)
        {
            cin>>b[j];
        }
        sort(a,a+k1);
        sort(b,b+k2);
        N
        if(a[k1-1]<b[k2-1])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }



}
