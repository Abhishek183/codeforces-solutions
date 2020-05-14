#include<iostream>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n<k) cout<<"NO";

		else if( (n%2!=0 && k%2==0) || (n%2==0 && k%2!=0 ))
		{
		  n=n-2;
		  if((n%2==0 && k%2==0) || (n%2!=0 && k%2!=0)) cout<<"NO"<<endl;
		  else{cout<<"YES"<<endl;
		  k--;

		  cout<<2<<" ";int l=k;

		  while(l){cout<<n/2<<" "; l--;}}
		}
		else if((n%2==0 && k%2==0) || (n%2!=0 && k%2!=0))
		{
			n=n-1;
		  if(n%2!=0 && k%2==0 || n%2==0 && k%2!=0) cout<<"NO"<<endl;
		  else{cout<<"YES"<<endl;

		  k--;
		  cout<<1<<" ";int l=k;

		  while(l){cout<<n+1/k<<" ";l--;} }
		}
		  cout<<endl;



	}







}
