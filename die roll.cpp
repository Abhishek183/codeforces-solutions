#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;

	int m=max(a,b);
	m=6-m+1;
	if(m==1) cout<<"1/6";
	else if(m==2) cout<<"1/3";
	else if(m==3) cout<<"1/2";
	else if(m==4) cout<<"2/3";
	else if(m==5) cout<<"5/6";
	else if(m==6) cout<<"1/1";





}
