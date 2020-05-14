#include<iostream>
#include<string>
using namespace std;
int main()
{

	int n;
	cin>>n;
	string s;cin>>s;
	int r=0,l=0,ft=0,sp,tp;

	for(int i=1;i<=s.size();i++)
	{
		if(s[i]=='R'&& ft==0){sp=i; ft=1;}

		if(s[i]=='R') r++;
		else if(s[i]=='L') l++;

	}

	tp=sp+abs(r-l);
	cout<<sp<<" "<<tp;







}
