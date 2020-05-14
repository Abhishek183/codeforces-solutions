#include<iostream>
using namespace std;
#define l long long
int main()
{
	l int n,p;cin>>n>>p;

	if(n%2==0 && p==n-1) cout<<1;
	else if(n%2!=0 && p==n-1) cout<<0;
	else
	   cout<<min(p/2,n-p/2);
}
