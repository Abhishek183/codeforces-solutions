#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		ll int n,b,max_area=0;cin>>n>>b;
		for(int j=0;j<n;j++)
		{
			ll int w,l,p;
			cin>>w>>l>>p;
			if(p<=b)
			{
				ll int area=w*l ;
				if(max_area<area) max_area=area;
			}
		}
		if(max_area>0) cout<<max_area<<endl;
		else cout<<"no tablet"<<endl;
	}
}
