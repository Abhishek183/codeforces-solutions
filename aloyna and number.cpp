#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;
	long long ans=5*(n/5)*(m/5);
	long long a=n%5,b=m%5;
	ans=ans+a*(m/5)+b*(n/5);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if((i+j)%5==0)
				ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
