#include<iostream>
using namespace std;
#define ll long long


int product(int a[],int n)
{
	ll int sum2=0;

    for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum2=sum2+(a[i]*a[j]);

		}
	}

    return sum2;


}
int main()
{   ll int n;cin>>n;
	 int a[n];  int sum1=0,sum3=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum1=sum1+a[i];
		sum3=sum3*a[i];
	}
	 int ans=product(a,n)+sum1+sum3;
	cout<<ans;
}
