#include<iostream>
#include<iomanip>
using namespace std;
#define ll long long
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		ll int n;
		double ans=0;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			ll int price,quantity,dis;
			cin>>price>>quantity>>dis;
			double newprice=price+(price*0.01*dis);
			double newdis=(newprice*dis*0.01);
			ans=(quantity*(price-(newprice-newdis)))+ans;
		}
		cout<<fixed<<setprecision(10)<<ans<<endl;
	}
}
