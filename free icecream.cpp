#include<iostream>
using namespace std;
#define ll long long
int main()
{

	ll int n,x,sum=0,c=0;
	cin>>n>>x;

	for(ll int i=0;i<n;i++)
	{
		char k;cin>>k;
		ll int e;cin>>e;
		if(k=='+') x+=e;

		if(k=='-' && x<e) c++;
		else if(k=='-' && x>=e) x-=e;


	}
	cout<<x<<" "<<c;





}
