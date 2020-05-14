#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=0,u=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(islower(s[i])) l++;
		else u++;

	}
	if(l==u)
	{
		for(int i=0;s[i]!='\0';i++)
		{
		  if(isupper(s[i])) s[i]=s[i]+32;
		}
		cout<<s;
	}
	else if(u>l)
	{
		for(int i=0;s[i]!='\0';i++)
		{
		  if(islower(s[i])) s[i]=s[i]-32;
		}
		cout<<s;
	}
	else
	{
		for(int i=0;s[i]!='\0';i++)
		{
		  if(isupper(s[i])) s[i]=s[i]+32;
		}
		cout<<s;
	}
}

