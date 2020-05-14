#include<iostream>
using namespace std;
#include<string>
#define ll long long
int main()
{
 string s;
 cin>>s;
 int k=0;
 for(ll int i=0;i<s.size();i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9' ) { k=1; cout<<"YES"; break;}
	}
	if(k!=1) cout<<"NO";



}
