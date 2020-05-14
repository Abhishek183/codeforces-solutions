#include<iostream>
using namespace std;
#define ll long long
int main()
{

	ll int t;
	cin>>t;

	for(ll int i=0;i<t;i++)
	{

		ll int a,b,k,r,s=0;
		cin>>a>>b>>k;

		r=(k+1)/2;
		s=r*a;
		s=s-b*(k-r);

		cout<<s<<endl;



	}




}
