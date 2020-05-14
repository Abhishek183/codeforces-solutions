#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
bool prime(ll int n,int no)
{

	bool a[n+1];
	for(int i=0;i<=n;i++) a[i]=true;

	for(int i=2;i<=sqrt(n);i++)
	{
		if(a[i]==true)
		{
			for(int j=2*i;j<=n;j=j+i)
			{
				a[j]=0;
			}
		}
	}

	for(int i=2;i<=n;i++)
	{
          if(a[no]==true)  return true;
	}
	return false;
}

int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;cin>>n;
		if( prime(n,sqrt(n))) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}
