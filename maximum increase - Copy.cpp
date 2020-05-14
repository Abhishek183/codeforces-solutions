#include<iostream>
using namespace std;
int main()
{

	int n,ml=0,pl=1,l=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];
	}

	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1]) {l++;
		    if(l>pl){ pl=l;}}
		else
			l=1;





	}
	cout<<pl;


}
