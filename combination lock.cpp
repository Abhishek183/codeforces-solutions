#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll int n,cnt=0;cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	for(ll int i=0;i<n;i++)
	{
		 cnt+=min(abs(int(s1[i])-int (s2[i])),9-max(int(s1[i]),int (s2[i]))+min(int(s1[i]),int (s2[i])) +1) ;


	} cout<<cnt;







}
