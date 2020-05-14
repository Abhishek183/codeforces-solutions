#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	string word;
	stringstream str(s);
	while(str>>word)
	{
		cout<<word<<endl;
	}

}
