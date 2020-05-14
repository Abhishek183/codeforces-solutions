#include<iostream>
using namespace std;
int main()
{

	int n;cin>>n;

	char s[n][n];
	char a[2*n-1];
	char b[(n*n)-2*n-1];
     int l=0,k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{    cin>>s[i][j];

			if(i==j || j==n-i-1) {a[l]=s[i][j]; l++;}
			else {b[k]=s[i][j]; k++;}

		}
	}
	 int i;
	for( i=0;i<2*n-2;i++)
	{
		if(a[i]!=a[i+1]) {break;}
	}
	if(i!=2*n-2) cout<<"NO";
	else{
	 int j;
	for( j=0;j<(n*n)-2*n;j++)
	{
		if(b[j]!=b[j+1]) {break;}
	}


	if(j!=(n*n)-(2*n)) cout<<"NO";
	else if((j==(n*n)-(2*n)) && a[0]!=b[0]) cout<<"YES";
	else cout<<"NO";

	}



}
