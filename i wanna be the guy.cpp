#include<iostream>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int a[n+1]={0};
	int n1;cin>>n1;
	int x[n1+1];
	for(int i=1;i<=n1;i++ )
	{
		cin>>x[i];
		a[x[i]]++;
	}
	int n2;cin>>n2;
	int y[n2+1];
	for(int i=1;i<=n2;i++ )
	{
		cin>>y[i];
		a[y[i]]++;
	}

	int flg=0;
	for(int i=1;i<=n;i++ )
	{
		if(a[i]!=0) {flg++;}
	    else break;

	}
	if(flg==n) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";



}
