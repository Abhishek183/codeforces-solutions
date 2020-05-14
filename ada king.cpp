#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		int r,c,k;
		cin>>r>>c>>k;

		int xmin=min(8,r+k);
		int xmax=max(1,r-k);
		int ymin=min(8,c+k);
		int ymax=max(1,c-k);
		long long ans=(xmin-xmax+1)*(ymin-ymax+1);
		cout<<ans<<endl;

	}
}
