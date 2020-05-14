#include<iostream>
using namespace std;
#define ll long long
int main()
{


	 int n,k,c=0;
	cin>>n>>k;
	//int a[k+1];
	for( int i=0;i<n;i++)
	{
		 int a[10]={0};
		 int x;cin>>x;


		while(x!=0)
		{

			 int index=x%10;
			a[index]++;
			x=x/10;

		}
		 int j;
		for( j=0;j<k+1;j++)
		{
			if(a[j]<=0) break;
		}

		if(j==k+1)c++;


	}
	cout<<c;




}
