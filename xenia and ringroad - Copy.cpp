#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll int n,m;
	cin>>n>>m;

	ll int a=0,b=0;
	ll int c=0,i=1,j=1;

		while(i<=m)
		{
		  cin>>b;
		  if(a<=b)
		  {
		  	 c+=b-a;

		  }
		  else
		  	c+=(n+b-a)%n;
          a=b;
          i++;
		}

    cout<<c-1;


}
