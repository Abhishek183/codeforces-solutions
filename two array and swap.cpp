#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
 int sum(ll int a[],ll int n)
{
	ll int s=0;
	for(ll int i=0;i<n;i++)
	{
		s+=a[i];
	}

	 return s;


}



int main()
{

	ll int t;cin>>t;
	while(t--)
	{

		ll int n,k;
		cin>>n>>k;

		ll int a[n],b[n];
		for(ll int i=0;i<n;i++) cin>>a[i];
		for(ll int i=0;i<n;i++) cin>>b[i];

		sort(b,b+n,greater<int>());
		sort(a,a+n);
		ll int i=0;
		while(k--)
		{
			if(a[i]<b[i]) swap(a[i],b[i]);
			else break;
			 i++;

		}

		cout<<sum(a,n)<<endl;





	}


}
