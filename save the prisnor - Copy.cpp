#include<iostream>
using namespace std;
#define ll long long
int main()
{
   ll int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
       ll int n,m,s;
        cin>>n>>m>>s;


       ll ans=(m+s-1)%n;
       if(ans==0) cout<<n<<endl;
       else
        cout<<ans<<endl;
    }
}


