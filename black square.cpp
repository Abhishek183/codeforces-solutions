#include<iostream>
using namespace std;
#include<string>

int main()
{
	int a1,a2,a3,a4,sum=0;
	cin>>a1>>a2>>a3>>a4;

	string s;
	cin>>s;

	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1') sum+=a1;
		else if(s[i]=='2') sum+=a2;
		else if(s[i]=='3') sum+=a3;
		else if(s[i]=='4') sum+=a4;
	}
	cout<<sum;



}
