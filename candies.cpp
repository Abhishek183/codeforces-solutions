#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main()
{

	ll int t;
	cin>>t;

	for(ll int i=0;i<t;i++)
	{
		ll int n,flag=0;
		cin>>n;
		for(ll int j=2;j<29;j++)
		{
			ll int x;
			for( x=0;x<n;x++)
			{
				if(n==-1*(x*(1-pow(2,j)))) { flag=1;break; }
			}
			if(flag==1) {cout<<x<<endl;break;}
		}



	}




}
