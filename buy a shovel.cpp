#include<iostream>
using namespace std ;
int main()
{

	int k,r;
	cin>>k>>r;
	for(int i=1;i<=10;i++)
	{
		int ans=(i*k)%10;
		if(ans==0 || ans==r) {cout<<i; break;}
	}




}
