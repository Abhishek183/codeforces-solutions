#include<iostream>
using namespace std;
int main()
{

	int n,m;
	cin>>n>>m;
	int a[n][m];

	for(int i=0;i<n;i++)
	{

		for(int j=0;j<m;j++)
		{

			cin>>a[i][j];

		}

	}


	 int mx=-1,c=0,w=0;

	for(int i=0;i<n-1;i++)
	{
		c=0;
		for(int j=0;j<m;j++)
		{
           for(int k=0;k<m;k++) {
			if(a[j][k]==1 || a[j+1][k]==1) c++;  }

		}

		if(c>mx){mx=c; w=1;}
		else if(mx==c) {mx==c;w++;}
		//else {w=0;}



	}
	cout<<mx<<endl<<w;


}
