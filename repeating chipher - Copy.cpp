#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int j=0,c=0;
	for(int i=0;s[j+i]!='\0';i++)
	{
		j=j+i;

		cout<<s[j];

	}
}
