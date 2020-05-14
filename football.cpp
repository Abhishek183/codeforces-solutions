#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<unordered_map>
#define ll long long

int main()
{

  ll int n;
  cin>>n;
  pair<int,string>s[n];
  for(ll int i=0;i<n;i++)
  {
  	s[i].first=0;
  	cin>>s[i].second;

  	for(ll int j=0;j<i;j++)
	{
		if(s[j].second==s[i].second) {s[j].first++; break;}
	}


  }
  sort(s,s+n);
	cout<<s[n-1].second;










}
