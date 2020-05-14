#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,k,c=0,num;
	cin>>n>>k;
	vector<int>v;

	for(int i=0; i<n;i++)
	{
		cin>>num;
		if(num%k==0)  c++;
	}
	cout<<c;

}
