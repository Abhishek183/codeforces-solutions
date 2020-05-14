#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void srs(string s,int i,int n)
{

	if(s[0]=='\0')  {cout<<"Empty String"; return;}

	for(int i=0;s[i+1]!='\0';i++)
	{
		if(s[i]==s[i+1])
			{ s.erase(s.begin() + i, s.begin() + i + 2);


		       return srs(s,0,n);
			}

	}
	cout<<s;
}





int main()
{

	string s;
	cin>>s;
	srs(s,0,s.size());
}
