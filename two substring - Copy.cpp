#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;

	int c=0,d=0;
	for(int i=0;i<s.size()-1;i++)
	{
	  if(s[i]=='A' && s[i+1]=='B') {c=1;i=i+2;}
	  if(s[i]=='B' && s[i+1]=='A' && c==1 ) {d=1;i=i+2;}



	}
	if( d==1) cout<<"YES";
	else {

	int c1=0,d1=0;
	for(int i=0;i<s.size()-1;i++)
	{
	  if(s[i]=='B' && s[i+1]=='A' ) {d1=1;i=i+2;}
	  if(s[i]=='A' && s[i+1]=='B' && d1==1) {c1=1;i=i+2;}
	}


	if(c1==1) cout<<"YES";
	else cout<<"NO";
	}
}
