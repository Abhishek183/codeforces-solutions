#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{

		ll int x;cin>>x;
		if(x%10==0) cout<<0<<endl;
		else if( x%5!=0) cout<<-1<<endl;

		else
		{   ll int c=0;
			while(x%10!=0)
			{
				x=2*x;
				c++;

			}cout<<c<<endl;;
		}
	}
}
