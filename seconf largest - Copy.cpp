#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{   //ll int a,b,c;
		ll int arr[3]  ;
		for(int i=0;i<3;i++) cin>>arr[i];
		sort(arr,arr+3);
		cout<<arr[1]<<endl;

	}
}
