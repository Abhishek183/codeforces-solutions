#include<iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	cout<<k/2<<endl;
	if(k%2==0)
		for(int i=0;i<k/2;i++) cout<<2<<" ";
	else
		{for(int i=0;i<(k/2)-1;i++) cout<<2<<" ";
	    cout<<3;}
}
