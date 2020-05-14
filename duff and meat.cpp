#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

	int n;
	cin>>n;

	pair<int,int>p[n];
	int x=1e9,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first>>p[i].second;


	}

	 //sort(p,p+n);


	for(int i=0;i<n;i++)
	{
		if(p[i].second<x) {  x=p[i].second;}

		sum+=p[i].first*x;


	}
      cout<<sum;
}
