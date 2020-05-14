#include<iostream>
#include<iomanip>
using namespace std;
#define ll long long
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		ll int n;cin>>n;
		if(n<1500){ float ans=n+ n*0.1 +0.9*n;
		  cout<<fixed<<setprecision(2)<<ans<<endl;   }
		else  { float ans=n+500+0.98*n;
			cout<<fixed<<setprecision(2)<<ans<<endl;}

	}
}
