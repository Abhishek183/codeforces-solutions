#include<iostream>
using namespace std;
int main()
{
	int x1,x2,x3,x4;
	cin>>x1>>x2>>x3>>x4;

	int mx=max(x1,max(x2,max(x3,x4)));
	if(mx-x1!=0) cout<<mx-x1<<" ";
	if(mx-x2!=0) cout<<mx-x2<<" ";
	if(mx-x3!=0) cout<<mx-x3<<" ";
	if(mx-x4!=0) cout<<mx-x4;

}

