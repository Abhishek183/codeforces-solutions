#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		ll int a,b;cin>>a>>b;
		cout<<max(a,b)<<" ";
		cout<<a+b<<endl;
	}
}
