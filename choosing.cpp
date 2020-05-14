#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	 int n,t;cin>>n>>t;
	 int a[n];
	 for(int i=0;i<n;i++) cin>>a[i];

	 sort(a,a+n);
	 int c=0;
	 for(int i=0;i<n-2;i=i+3)
	 {          //cout<<i;
	 	if(a[i+2]+t<=5) c++;
	 	else break;
	 }
	 cout<<c;

}
