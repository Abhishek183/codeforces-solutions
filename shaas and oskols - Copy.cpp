#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int t[n];
	for(int i=1;i<=n;i++) cin>>t[i];

	int m;cin>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;


		int r= t[x]-y;
		int l=t[x]-r-1;
		 t[x-1]+=l;
		 t[x+1]+=r;
		 t[x]=0;
	}


	for(int i=1;i<=n;i++) cout<<t[i]<<endl;






}
