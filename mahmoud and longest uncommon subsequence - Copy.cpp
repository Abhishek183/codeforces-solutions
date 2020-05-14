#include<iostream>
using namespace std;
#include<string>
int main()
{

	string a,b;
	cin>>a>>b;

	if(a==b) cout<<-1;
	else cout<<max(a.size(),b.size());


}
