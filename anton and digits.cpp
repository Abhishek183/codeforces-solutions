#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
	ll int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	ll int mn=min(k2,min(k5,k6));
	k2=abs(k2-mn);
	k5=abs(k5-mn);
	k6=abs(k6-mn);

	ll int sum=mn*256;
	mn=min(k2,k3);
	sum+=mn*32;

	cout<<sum;
}
