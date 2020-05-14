#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
          int a[26]={0};
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]!=s[i+1]){
			int x=s[i]-97;
			a[x]=1;}
			else i++;
		}
		for(int i=0;i<26;i++)
		{
			if(a[i]%2!=0) cout<<(char)(i+97);
		}
		cout<<endl;

	}
}
