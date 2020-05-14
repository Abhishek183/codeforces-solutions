#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int  main()
{
	ll int n,c=0,sum=0,msum=0;
	cin>>n;
	ll int a[n];
	for(ll int i=0;i<n;i++) cin>>a[i];

	//sort(a, a+n, greater<int>());

    int i=0,j=n-1,gr=0;
	while(c<=n-1)
	{
		if(a[i]>a[j]) {gr=a[i];i++; }
		else {gr=a[j];j--;}

		if(c%2==0) sum+=gr;
		else msum+=gr;

		c++;

	}
	cout<<endl<<sum<<" "<<msum;

}

