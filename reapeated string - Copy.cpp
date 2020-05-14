#include<iostream>
#include<string>
using namespace std;
#define ll long long
int main()
{


	string s;
	cin>>s;
	ll int n;cin>>n;

	ll int i=0,c=0;

	while(i<s.size())
	{
		if(s[i]=='a') c++;

		i++;
	}

	 c=c*(n/s.size());
	 //cout<<c;
	 i=0;
	 while(i<(n%s.size()))
	 {
	 	if(s[i]=='a')c++;

	 	i++;
	 }
	 cout<<c;






}
