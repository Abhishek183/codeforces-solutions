#include<iostream>
using namespace std;

int nikal(int b,int k[],int n,int u[],int m)
{
	int sum=0,mx=-1,nmx=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum=k[i]+u[j];
			if(sum<=b) mx=max(sum,mx);
		}

		nmx=max(nmx,mx);
	}
	 return nmx;





}


int main()
{
	int b,n,m;
	cin>>b>>n>>m;
	int k[n],u[m];
	for(int i=0;i<n;i++)cin>>k[i];
	for(int i=0;i<m;i++)cin>>u[i];

	cout<<nikal(b,k,n,u,m);



}
