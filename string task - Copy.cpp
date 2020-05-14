#include<iostream>
using namespace std;
#include<string>

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == 'A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U'|| s[i]=='I' || s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i')
		  {

		  }
		else
		  {
		  	if(isupper(s[i])) {cout<<"."<<char(int(s[i])+32);}

			else
			  cout<<"."<<s[i];
		  }
	}

}
