#include<iostream>
#include<math.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!='0') c++;


		}
		cout<<c<<endl;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!='0') {cout<<s[i];

			int z=s.size()-i-1;
			while(z--) cout<<0;
			cout<<" "; }


		}








	}





}
