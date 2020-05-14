#include<iostream>
using namespace std ;
#define ll long long

ll int lot(ll int n,ll int c)
{

	if(n==0) return c;
	if(n-100>=0) lot(n-100,c+1);
	else if(n-20>=0) lot(n-20,c+1);
	else if(n-10>=0) lot(n-10,c+1);
	else if(n-5>=0) lot(n-5,c+1);
	else if(n-1>=0) lot(n-1,c+1);


}
int main()
{
	ll int n;
	cin>>n;
	cout<<lot(n,0);
}
