#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m,s;
		cin>>n>>m>>s;
		//int a[n];
		int j=s-1,c=0;
		while(c<m)
		{      c++;

			if(j==n) {j=1;cout<<c<<" "; }
			j++;
		}
		cout<<j<<endl;
	}
}
