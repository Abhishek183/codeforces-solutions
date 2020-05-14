#include<iostream>
using namespace std;
int main()
{

	int i,j,k,c=0;
	cin>>i>>j>>k;

	for(int x=i;x<=j;x++)
	{

      int rev=0,n=x;
		while(n!=0)
		{

			rev=rev*10+n%10;
			n=n/10;


		}



		if((abs(x-rev))%k==0)
			 c++;

	}

       cout<<c;



}
