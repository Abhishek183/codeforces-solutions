#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		 int len;cin>>len;
		string s;
		cin>>s;
		int in=0,y=0;
		for(int j=0;j<len;j++)
		{
			if(s[j]=='I') in++;
			else if(s[j]=='Y') y++;
		}
		if(in>0) cout<<"INDIAN"<<endl;
		else
		{
			if(y>0) cout<<"NOT INDIAN"<<endl;
			else cout<<"NOT SURE"<<endl;
		}
	}
}
