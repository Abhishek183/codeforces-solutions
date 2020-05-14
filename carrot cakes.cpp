#include<iostream>
using namespace std;
int main()
{

	int n,k,t,d;
	cin>>n>>k>>t>>d;

	if (((d / t) + 1) * k >= n) cout << "NO" << endl;

    else cout << "YES" << endl;

}
