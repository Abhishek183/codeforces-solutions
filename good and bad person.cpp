#include<iostream>
#include<string>
#define ll long long
using namespace std;
 int main()
 {
 	ll int t;cin>>t;

for(int i=0;i<t;i++)
 {
 	ll int n,k,small=0,capital=0;
 	cin>>n>>k;
 	string s; cin>>s;
 	for(int j=0;j<n;j++)
	{
		  if(islower(s[j]))  small++;
		  else capital++;
	}
	if(k>=small && k>=capital)  cout<<"both"<<endl;
	else if(k>=small && k<capital) cout<<"brother"<<endl;
	else if(k<small && k>=capital) cout<<"chef"<<endl;
	else if((k<small && k<capital))  cout<<"none"<<endl;

 }
 }
