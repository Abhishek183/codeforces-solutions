#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{     ll int c=0;
		ll int n;cin>>n;
		while(n>0){
		 ll int srt=sqrt(n);
		  n=n-(srt*srt);
		 c++;
		} cout<<c<<endl;
	}
}
