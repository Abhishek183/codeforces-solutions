#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		int l;cin>>l;
		int a[l];
		for(int j=0;j<l;j++)
		{
			cin>>a[j] ;

		} int k;cin>>k;
		int check=a[k-1];
		sort(a,a+l);

		for(int j=0;j<l;j++)
		{
			if(a[j]==check) cout<<j+1<<endl;

		}
	}
}
