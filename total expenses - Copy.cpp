#include<iostream>
#include<iomanip>
#define ll long long
using namespace std;
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		ll int q,p;cin>>q>>p;
		if(q<=1000)
		{
		  cout<<fixed<<setprecision(6)<<(float)q*p<<endl;
		}
		else
		{   float ans=(p*q)-(p*q)/10;
			cout<<fixed<<setprecision(6)<<ans<<endl;
		}
	}
}
