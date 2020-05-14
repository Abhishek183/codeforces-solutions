#include<iostream>
using namespace std;
#include<algorithm>
int main()
{

	int n;
	cin>>n;
	int a[n],b[101]={0};
	for(int i=1;i<=n;i++)
	{cin>>a[i];
	  b[a[i]]++;

	}
	 sort(b,b+101);

	cout<<n-b[100];


}
