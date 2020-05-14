#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int t,k=0;cin>>t;
	pair<int,int>p[n];

	for(int i=0;i<n;i++)
	{

		cin>>p[i].first>>p[i].second;

		if(t!=p[i].first && t!=p[i].second  && 7-t!=p[i].first && 7-t!=p[i].second  ) t=7-t;
		else k=1;

	}
	if(k==1) cout<<"NO";
	else cout<<"YES";





}
