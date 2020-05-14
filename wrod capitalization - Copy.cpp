#include<iostream>
using namespace std;
#include<string>
int main()
{

	string s;
	cin>>s;

	if(islower(s[0])) s[0]=char(int(s[0])-32);

	cout<<s;
}
