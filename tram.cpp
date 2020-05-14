#include<iostream>
using namespace std;
#define ll long long
int  main()
{
	ll int n,sum=0,msum=-10;
	cin>>n;
	ll int a[n],b[n];
	for(ll int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];

		sum=sum-a[i]+b[i];
		if(sum>=msum) msum=sum;

	}
	cout<<msum;

}
