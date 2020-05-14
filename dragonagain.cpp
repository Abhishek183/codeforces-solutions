#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	pair<int ,int>p[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	sort(p,p+n);
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(s>p[i].first) {s+=p[i].second; c++;}
		else break;
	}
	if(c==n) cout<<"YES";
	else cout<<"NO";

}
