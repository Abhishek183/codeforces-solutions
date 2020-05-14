#include<iostream>
using namespace std;
#include<string>
#define ll long long
int main()
{
   string s;
   cin>>s;
  ll int a[26]={0},c=0;

	for(ll int i=0;i<s.size();i++)
	{
		ll int index=(int(s[i])-19)%26;
		a[index]=1;
		//cout<<index<<",";
	}
	for(ll int i=0;i<26;i++)
	{
		if(a[i]==1) c++;
	}

	if(c%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";





}
