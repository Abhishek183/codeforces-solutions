#include<iostream>
using namespace std;
int main()
{

	int n,i;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	for( i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])c++;
		}

		if(c>(n+1)/2)
			{cout<<"NO";break;}

	}

	  if(i==n) cout<<"YES";









}
