#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;cin>>n;
		stringstream   ss;
		ss<<n;
		string s=ss.str();

		long long int len=s.length();

		char first=s[0] ;
		char last=s[len-1]   ;
		long long int sum =((int(first)-48) + ((int)last)-48)  ;
		cout<<sum<<endl;
	}
}
