#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	ll int q;cin>>q;
  for(int j=0;j<q;j++){
	ll int a[3];
	for(ll int i=0;i<3;i++) cin>>a[i];
	sort(a,a+3);
	ll int d=(a[1]-a[0]);
	a[0]+=d;
	a[2]=a[2]-d;
	a[0]+=a[2]/2;
	a[1]+=a[2]/2;
	cout<<min(a[1],a[0])<<endl;

	}

}
