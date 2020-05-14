#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;

	if(s1.size()==s2.size())
	{int i=0,j=s1.size()-1,flag=0;
		while(i<=s1.size()-1)
		{
			if(s1[i]!=s2[j]) {flag=1; break;}
			i++;j--;
		}
		if(flag==0) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";





}
