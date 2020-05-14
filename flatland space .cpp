#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{


	ll int n,s,mx=-1e9,d=0,mn=1e9;
	cin>>n>>s;
	ll int a[s];
	for(ll int i=0;i<s;i++) cin>>a[i];

	for(ll int i=0;i<n;i++)
	{mn=1e9;
		for(ll int j=0;j<s;j++)
		{

			mn=min(mn,abs(i-a[j]));

		  // cout<<abs(i-a[j]);


		}
		//cout<<mn<<" ";
		mx=max(mx,mn);
		//cout<<mn<<":"<<mx<<endl;;
		//mx=max(mx,mn);



	}  cout<<mx;






}
