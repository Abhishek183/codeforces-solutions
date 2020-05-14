#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int a[26]={0};

	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=',' && s[i]!='{' && s[i]!='}' && s[i]!=' ')
			{

				int index=s[i]-97;
				//cout<<s[i]<<index<<" ";
				a[index]++;
				//cout<<"d";
			}

             //cout<<"s";
	}
	 int c=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]>0) c++;
	}


	 cout<<c;





}
