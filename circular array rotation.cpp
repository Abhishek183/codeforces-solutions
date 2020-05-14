#include<iostream>
using namespace std;
int main()
{

	int n,k,q;
	cin>>n>>k>>q;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];


	for(int i=0;i<q;i++)
	{
		int m;
		cin>>m;

		//int index=(k+m+1)%n;
	   cout<<a[(n - (k % n)+ m) % n] <<endl;

	}





}
