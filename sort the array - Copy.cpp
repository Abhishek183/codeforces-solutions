#include<iostream>
using namespace std;
#include<algorithm>
int main()
{

	int n;
	cin>>n;
	int a[n],b[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}

	sort(b,b+n);

	int in=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i]) in++;
	}

	if(in==0) cout<<"yes"<<endl<<1<<" "<<1;
	else if(in==2)
		{	cout<<"yes"<<endl;

			for(int i=0;i<n;i++)
			{
			if(a[i]!=b[i]) cout<<i+1<<" ";
			}
		}
	else cout<<"no";






}
