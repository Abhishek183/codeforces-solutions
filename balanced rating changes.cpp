#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0) cout<<a[i]/2<<endl;
		else if(a[i]%2!=0 && c==0)
		{
			c=1;
			cout<<(a[i]/2)<<endl;
		}
		else if(a[i]%2!=0 && c==1)
		{
			c=0;
			if(a[i]>0) cout<<a[i]/2<<endl;
			else cout<<(a[i]/2)-1<<endl;
		}
	}
}
