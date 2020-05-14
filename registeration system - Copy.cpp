#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
	int n;
	cin>>n;
	int i=0;
	unordered_map<string,int>h;
	while(i<n)
	{

		string s;cin>>s;
		if(h[s]==0)     //coutner
		{
			cout<<"OK"<<endl;

		}
		else
		{
			cout<<s<<h[s]<<endl;

		}
		h[s]++;
		i++;
	}

}
