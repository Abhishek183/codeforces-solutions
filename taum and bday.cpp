#include<iostream>
using namespace std;
#define ll long long
int main()
{

	ll int t;
	cin>>t;

	for(ll int i=0;i<t;i++)
	{

		ll int b,w,bc,wc,z;
		cin>>b>>w>>bc>>wc>>z;

		if(wc>bc)
		cout<<min((b*bc+w*wc),(b+w)*bc+z*w)<<endl;
		else
			cout<<min((b*bc+w*wc),(b+w)*wc+z*b)<<endl;






	}







}
