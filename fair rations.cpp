#include<iostream>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(i==n-1 && a[i]%2!=0) {k=1;}
		else if(a[i]%2!=0) {a[i]++; a[i+1]++; c=c+2;}




	}
	if(k==0) cout<<c;
	else cout<<"NO";





}
