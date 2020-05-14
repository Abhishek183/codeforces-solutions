#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	ll int n, m, a;
	cin >> n >> m >> a;
	ll int ans = ( ceil( n / a) * (ceil( m / a) ) );
	cout<<ans;


}
