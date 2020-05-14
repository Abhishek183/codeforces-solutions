#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;cin>>t;
	string s;
	cin>>s;

	int z=0,e=0,r=0,o=0,n=0;

	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='z')z++;
		else if(s[i]=='e')e++;
		else if(s[i]=='o')o++;
		else if(s[i]=='r')r++;
		else if(s[i]=='n')n++;
	}
	int m=min(o,min(n,e));
	for(int i=0;i<m;i++) cout<<1<<" ";
	e=(e-m);

	m=min(z,min(e,min(r,o)));
	for(int i=0;i<m;i++) cout<<0<<" ";








}
