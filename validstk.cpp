#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		ll int n,c=0,d=0;cin>>n;
		ll int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[i];
			if(a[i]==1) c++;
			else if(a[i]==0)c--;
			if(c<0){d++; break;}
		}
		if(d>0) cout<<"Invalid"<<endl;
		else cout<<"Valid"<<endl;
	}
}
